/*
 * XREFs of ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x1800A4728
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800A47D0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessInsertChildAt(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_INSERTCHILDAT *a3)
{
  unsigned int v3; // r9d
  CVisual *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  struct CVisual *v9; // rdx
  int inserted; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx

  v3 = *((_DWORD *)a3 + 2);
  v5 = this;
  if ( v3
    && v3 < *((_DWORD *)a2 + 7)
    && (v6 = *((_QWORD *)a2 + 5), v7 = v3 * *((_DWORD *)a2 + 6), v8 = v7, *(_DWORD *)(v7 + v6))
    && (this = *(CVisual **)(v7 + v6 + 8)) != 0LL
    && (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 195LL) )
  {
    v9 = *(struct CVisual **)(v8 + v6 + 8);
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    inserted = CVisual::InsertChildAt(v5, v9, *((_DWORD *)a3 + 3), 0);
    v12 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, inserted, 0xCA3u, 0LL);
  }
  else
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0xCA0u, 0LL);
  }
  return v12;
}
