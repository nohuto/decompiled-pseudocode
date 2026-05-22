/*
 * XREFs of ?SetInputSinkHandle@NotificationData@@QEAAXPEAX@Z @ 0x180015358
 * Callers:
 *     ?NotifyInputSinkParented@@YAHPEAX0@Z @ 0x1800153C0 (-NotifyInputSinkParented@@YAHPEAX0@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall NotificationData::SetInputSinkHandle(NotificationData *this, void *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rsi
  const char *v5; // r9
  DWORD LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 16);
  v4 = *((_QWORD *)this + 2);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    NtCloseCompositionInputSink(v4);
    SetLastError(LastError);
  }
  *v2 = 0LL;
  if ( (int)NtDuplicateCompositionInputSink(a2) < 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x25,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\InputSinkTreeCache.h",
      v5);
    __debugbreak();
  }
}
