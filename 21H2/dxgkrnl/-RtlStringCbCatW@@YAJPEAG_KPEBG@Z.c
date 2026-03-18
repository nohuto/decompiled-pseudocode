/*
 * XREFs of ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C0044448
 * Callers:
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C01DCF70 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?GenerateUmdFileName@@YAJQEAGPEBG1@Z @ 0x1C02CF63C (-GenerateUmdFileName@@YAJQEAGPEBG1@Z.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C0301F98 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C03032A0 (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0303800 (-EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGK.c)
 *     ?ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0303C60 (-ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x1C001A598 (RtlStringCopyWorkerW_0.c)
 */

NTSTATUS __fastcall RtlStringCbCatW(unsigned __int16 *a1, __int64 a2, size_t *a3)
{
  unsigned __int16 *v3; // rax
  __int64 v4; // r9
  NTSTATUS result; // eax
  size_t v6; // [rsp+20h] [rbp-18h]

  v3 = a1;
  v4 = 260LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    return RtlStringCopyWorkerW_0(
             (unsigned __int16 *)((char *)a1 + ((2 * (260 - v4)) & -(__int64)(v4 != 0))),
             ((v4 - 260) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) + 260,
             a3,
             (STRSAFE_PCNZWCH)a3,
             v6);
  return result;
}
