/*
 * XREFs of __lambda_2e17bef57c72db371333aa9a3de53833_::operator()_::_1_::catch$40 @ 0x18019F4B4
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq_EventWriteTransfer @ 0x180148D70 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall _lambda_2e17bef57c72db371333aa9a3de53833_::operator()_::_1_::catch_40(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a2 + 64);
  **(_DWORD **)(v2 + 48) = -2147024882;
  v3 = *(_DWORD **)(v2 + 48);
  v4 = (unsigned int)*v3;
  if ( (int)v4 >= 0 )
    return 1LL;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    McTemplateU0sqq_EventWriteTransfer(
      v4,
      a2,
      "HotKeyProcessor::RegisterHotKey::<lambda_2e17bef57c72db371333aa9a3de53833>::operator ()",
      268LL,
      *v3);
  return 0LL;
}
