/*
 * XREFs of ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1802056DC
 * Callers:
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180206528 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180046E80 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800D7BE4 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800E15E4 (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     ?HrMallocClear@@YAJ_K0PEAPEAX@Z @ 0x18026BDA0 (-HrMallocClear@@YAJ_K0PEAPEAX@Z.c)
 */

__int64 __fastcall CGeometryGroup::ProcessAppend(
        CGeometryGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRYGROUP *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // r8d
  void *v6; // r14
  int v8; // eax
  unsigned __int64 v9; // rcx
  void *v10; // rsi
  unsigned int v11; // ebx
  unsigned __int64 v12; // rbp
  unsigned int v13; // eax
  unsigned int v14; // r15d
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // r14
  void *v19; // rcx
  void *v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-58h]
  void *Src; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+90h] [rbp+18h] BYREF
  void *v25; // [rsp+98h] [rbp+20h] BYREF

  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  LODWORD(v24) = 0;
  v25 = 0LL;
  v8 = CResource::UnmarshalResourceArray(a4, a5, v5, 0x41u, (unsigned int *)&v24, &Src, (__int64)a2, 0);
  v10 = Src;
  v11 = v8;
  if ( v8 < 0 )
  {
    v22 = 598;
  }
  else
  {
    v12 = (unsigned int)v24;
    if ( !(_DWORD)v24 )
      return v11;
    v13 = *((_DWORD *)this + 42);
    v14 = v13 + v24;
    if ( v13 + (unsigned int)v24 < v13 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024362, 0x25Cu);
      goto LABEL_16;
    }
    v8 = CResource::RegisterNNotifiersInternal(this, (struct CResource **)Src, (unsigned int)v24);
    v11 = v8;
    if ( v8 >= 0 )
    {
      v15 = HrMallocClear(v9, v14, &v25);
      v11 = v15;
      if ( v15 >= 0 )
      {
        v17 = *((unsigned int *)this + 42);
        v18 = (char *)v25;
        if ( (_DWORD)v17 )
        {
          memcpy_0(v25, *((const void **)this + 22), 8LL * (unsigned int)v17);
          v17 = *((unsigned int *)this + 42);
        }
        memcpy_0(&v18[8 * v17], v10, 8 * v12);
        v19 = (void *)*((_QWORD *)this + 22);
        if ( v19 )
          DefaultHeap::Free(v19);
        *((_QWORD *)this + 22) = v18;
        v20 = v10;
        *((_DWORD *)this + 42) = v14;
        goto LABEL_20;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x265u);
      CResource::UnRegisterNNotifiersInternal(this, (struct CResource **)v10, v12);
      v6 = v25;
      goto LABEL_16;
    }
    v22 = 607;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, v22);
LABEL_16:
  if ( v10 )
    DefaultHeap::Free(v10);
  if ( v6 )
  {
    v20 = v6;
LABEL_20:
    DefaultHeap::Free(v20);
  }
  return v11;
}
