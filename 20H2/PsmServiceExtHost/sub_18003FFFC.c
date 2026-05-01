/*
 * XREFs of sub_18003FFFC @ 0x18003FFFC
 * Callers:
 *     sub_18003FEE4 @ 0x18003FEE4 (sub_18003FEE4.c)
 *     sub_180041BF8 @ 0x180041BF8 (sub_180041BF8.c)
 *     sub_180086A68 @ 0x180086A68 (sub_180086A68.c)
 * Callees:
 *     sub_180040074 @ 0x180040074 (sub_180040074.c)
 *     sub_1800400D8 @ 0x1800400D8 (sub_1800400D8.c)
 *     RtlGetNtSystemRoot @ 0x180045494 (RtlGetNtSystemRoot.c)
 *     sub_180086478 @ 0x180086478 (sub_180086478.c)
 *     sub_1800866A8 @ 0x1800866A8 (sub_1800866A8.c)
 */

__int64 __fastcall sub_18003FFFC(int a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  int v6; // ebx
  __int64 NtSystemRoot; // rax
  const wchar_t *v9; // rax

  if ( !a3 )
    return 3221225485LL;
  RtlRunOnceExecuteOnce(&unk_1800B4EB8, sub_180043910, 0LL, 0LL);
  if ( !a1 )
    return sub_180040074(a3);
  v5 = a1 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        NtSystemRoot = RtlGetNtSystemRoot();
        return sub_1800866A8(NtSystemRoot, a3);
      }
      else
      {
        return 3221225475LL;
      }
    }
    else
    {
      return sub_1800400D8(a3);
    }
  }
  else
  {
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      v9 = L"C:\\data\\programs\\windowsapps";
    else
      v9 = (const wchar_t *)RtlGetNtSystemRoot();
    return sub_180086478(v9, a3);
  }
}
