/*
 * XREFs of ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x1800C72DC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180077274 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B114 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009B3D8 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetDirtyRect(
        void **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT *a3,
        float *a4,
        unsigned int a5)
{
  unsigned int v5; // edx
  void **v8; // rbx
  char v9; // di
  int v10; // esi
  bool v11; // al
  float v12; // xmm0_4
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r8
  int v17; // edx
  int v18; // eax
  int v19; // r9d
  int v20; // r10d
  int v21; // r11d
  int v22; // eax
  _DWORD *v24; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v25[3]; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v26[2]; // [rsp+4Ch] [rbp-2Dh] BYREF
  _DWORD v27[9]; // [rsp+54h] [rbp-25h] BYREF
  _BYTE v28[15]; // [rsp+79h] [rbp+0h] BYREF
  void *retaddr; // [rsp+D0h] [rbp+57h]

  v5 = *((_DWORD *)a3 + 2);
  v8 = this;
  v9 = 1;
  if ( v5 && (this = (void **)(16LL * v5), (void **)a5 == this) )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = 0;
      if ( a4[4 * v10] >= -16777216.0 && a4[4 * v10 + 1] >= -16777216.0 && a4[4 * v10 + 2] <= 16777216.0 )
        v11 = a4[4 * v10 + 3] <= 16777216.0;
      if ( !v11 )
        break;
      v12 = a4[4 * v10];
      v24 = v25;
      PixelAlign(v12, 0);
      PixelAlign(a4[2 * v13 + 1], v14);
      PixelAlign(a4[2 * v15 + 2], 1);
      v18 = PixelAlign(a4[2 * v16 + 3], v17);
      if ( v19 >= v18 || v20 >= v21 )
      {
        v25[0] = 0;
      }
      else
      {
        v27[0] = v18;
        v25[0] = 2;
        v25[1] = v20;
        v25[2] = v21;
        v26[0] = v19;
        v26[1] = (unsigned int)v28 - 29 - (unsigned int)v26;
        v27[2] = v20;
        v27[1] = (unsigned int)v28 - 29 - (unsigned int)v27 + 8;
        v27[3] = v21;
      }
      v22 = FastRegion::CRegion::Union(v8 + 74, (const struct FastRegion::Internal::CRgnData **)&v24);
      if ( v22 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v22, retaddr);
      FastRegion::CRegion::FreeMemory((void **)&v24);
      if ( (unsigned int)++v10 >= *((_DWORD *)a3 + 2) )
      {
        (*((void (__fastcall **)(void **, __int64, void **))*v8 + 9))(v8, 1LL, v8);
        v9 = 0;
        break;
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x19Eu, 0LL);
  }
  *(_DWORD *)v8[74] = 0;
  if ( v9 )
    (*((void (__fastcall **)(void **, _QWORD, _QWORD))*v8 + 9))(v8, 0LL, 0LL);
  return 0LL;
}
