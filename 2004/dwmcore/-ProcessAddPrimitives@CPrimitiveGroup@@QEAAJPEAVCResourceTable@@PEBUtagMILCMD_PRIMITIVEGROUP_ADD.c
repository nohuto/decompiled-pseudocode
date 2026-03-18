/*
 * XREFs of ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x18009E7F0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x18009E70C (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18009E750 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x18009F6C0 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A61E4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qxqq_EventWriteTransfer @ 0x1801E4E88 (McTemplateU0qxqq_EventWriteTransfer.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddPrimitives(
        CRenderTargetBitmap **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES *a3)
{
  unsigned int v6; // ebp
  int v7; // edx
  __int64 v8; // rcx
  CMILCOMBase *Resource; // r14
  char v10; // bl
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v6 = 0;
  Resource = (CMILCOMBase *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 169LL);
  if ( !Resource )
  {
    v13 = 147;
LABEL_10:
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, v13, 0LL);
    return v6;
  }
  if ( *((_DWORD *)a3 + 3) < 0x3Cu )
  {
    v13 = 152;
    goto LABEL_10;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    McTemplateU0qxqq_EventWriteTransfer(
      v8,
      v7,
      *((_DWORD *)a2 + 12),
      (_DWORD)this,
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2));
  v10 = (*((__int64 (__fastcall **)(CRenderTargetBitmap **))*this + 26))(this);
  ReplaceInterface<CSharedSection,CSharedSection>(this + 54, Resource);
  *((_DWORD *)this + 110) = *((_DWORD *)a3 + 3);
  v11 = *((_DWORD *)a3 + 4);
  this[64] = 0LL;
  this[65] = 0LL;
  this[66] = 0LL;
  this[67] = 0LL;
  *((_DWORD *)this + 111) = v11;
  CPrimitiveGroup::ReleasePrimitiveCaches((CPrimitiveGroup *)this, 1);
  CPrimitiveGroup::ResolveSharedMemoryBuffer((CPrimitiveGroup *)this);
  if ( v10 != (*((unsigned __int8 (__fastcall **)(CRenderTargetBitmap **))*this + 26))(this) )
    (*((void (__fastcall **)(CRenderTargetBitmap **, __int64))*this + 9))(this, 3LL);
  return v6;
}
