/*
 * XREFs of ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x180045804
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180044738 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800803F8 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // r9d
  int v19; // r10d
  int v20; // r11d
  int v21; // eax
  _DWORD *v23; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v24[3]; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v25[2]; // [rsp+4Ch] [rbp-2Dh] BYREF
  _DWORD v26[9]; // [rsp+54h] [rbp-25h] BYREF
  _BYTE v27[15]; // [rsp+79h] [rbp+0h] BYREF
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
      v23 = v24;
      PixelAlign(this, 0LL);
      PixelAlign(v13, v12);
      PixelAlign(v14, 1LL);
      v17 = PixelAlign(v16, v15);
      if ( v18 >= v17 || v19 >= v20 )
      {
        v24[0] = 0;
      }
      else
      {
        v26[0] = v17;
        v24[0] = 2;
        v24[1] = v19;
        v24[2] = v20;
        v25[0] = v18;
        v25[1] = (unsigned int)v27 - 29 - (unsigned int)v25;
        v26[2] = v19;
        v26[1] = (unsigned int)v27 - 29 - (unsigned int)v26 + 8;
        v26[3] = v20;
      }
      v21 = FastRegion::CRegion::Union(v8 + 74, (const struct FastRegion::Internal::CRgnData **)&v23);
      if ( v21 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v21, retaddr);
      FastRegion::CRegion::FreeMemory((void **)&v23);
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
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x1B6u, 0LL);
  }
  *(_DWORD *)v8[74] = 0;
  if ( v9 )
    (*((void (__fastcall **)(void **, _QWORD, _QWORD))*v8 + 9))(v8, 0LL, 0LL);
  return 0LL;
}
