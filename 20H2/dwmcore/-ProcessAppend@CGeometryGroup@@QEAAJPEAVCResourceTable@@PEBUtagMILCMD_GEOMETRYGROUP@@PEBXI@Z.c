/*
 * XREFs of ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801B2724
 * Callers:
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801B32B0 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18004BC7C (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x180051D54 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x1800C933C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     memcpy_0 @ 0x1800EE9CB (memcpy_0.c)
 *     ?HrMallocClear@@YAJ_K0PEAPEAX@Z @ 0x180213C70 (-HrMallocClear@@YAJ_K0PEAPEAX@Z.c)
 */

__int64 __fastcall CGeometryGroup::ProcessAppend(
        CGeometryGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRYGROUP *a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned int v5; // r8d
  void *v6; // rbp
  char v8; // r12
  int v9; // eax
  __int64 v10; // rcx
  void *v11; // rsi
  int v12; // ebx
  unsigned __int64 v13; // r14
  unsigned int v14; // eax
  unsigned int v15; // r15d
  int v16; // eax
  unsigned __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  char *v21; // r12
  void *v22; // rcx
  void *Src; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+A0h] [rbp+18h] BYREF
  void *v26; // [rsp+A8h] [rbp+20h] BYREF

  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  LODWORD(v25) = 0;
  v8 = 0;
  v26 = 0LL;
  v9 = CResource::UnmarshalResourceArray(a4, a5, v5, 0x41u, (unsigned int *)&v25, &Src, (__int64)a2, 0);
  v11 = Src;
  v12 = v9;
  v13 = (unsigned int)v25;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x256u, 0LL);
  }
  else if ( (_DWORD)v25 )
  {
    v14 = *((_DWORD *)this + 40);
    v15 = v14 + v25;
    if ( v14 + (unsigned int)v25 < v14 )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024362, 0x25Cu, 0LL);
      goto LABEL_18;
    }
    v16 = CResource::RegisterNNotifiersInternal(this, (struct CResource **)Src, (unsigned int)v25);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x25Fu, 0LL);
    }
    else
    {
      v8 = 1;
      LOBYTE(v25) = 1;
      v18 = HrMallocClear(v17, v15, &v26);
      v12 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x265u, 0LL);
        v6 = v26;
      }
      else
      {
        v20 = *((unsigned int *)this + 40);
        v21 = (char *)v26;
        if ( (_DWORD)v20 )
        {
          memcpy_0(v26, *((const void **)this + 21), 8LL * (unsigned int)v20);
          v20 = *((unsigned int *)this + 40);
        }
        memcpy_0(&v21[8 * v20], v11, 8 * v13);
        v22 = (void *)*((_QWORD *)this + 21);
        if ( v22 )
          operator delete(v22);
        *((_QWORD *)this + 21) = v21;
        *((_DWORD *)this + 40) = v15;
        operator delete(v11);
        v8 = v25;
        v11 = 0LL;
      }
    }
  }
  if ( v12 >= 0 )
    return (unsigned int)v12;
  if ( v8 )
    CResource::UnRegisterNNotifiersInternal(this, (struct CResource **)v11, v13);
LABEL_18:
  if ( v11 )
    operator delete(v11);
  if ( v6 )
    operator delete(v6);
  return (unsigned int)v12;
}
