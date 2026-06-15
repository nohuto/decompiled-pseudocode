/*
 * XREFs of sub_18004C0F0 @ 0x18004C0F0
 * Callers:
 *     sub_18004997C @ 0x18004997C (sub_18004997C.c)
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 *     sub_180125838 @ 0x180125838 (sub_180125838.c)
 *     sub_180125A30 @ 0x180125A30 (sub_180125A30.c)
 * Callees:
 *     sub_180060F54 @ 0x180060F54 (sub_180060F54.c)
 */

__int64 __fastcall sub_18004C0F0(__int64 a1)
{
  __int64 result; // rax
  HMODULE ModuleHandleW; // rax
  __int64 v4; // rcx

  result = 0LL;
  if ( !*(_BYTE *)(a1 + 74) )
  {
    ModuleHandleW = GetModuleHandleW(L"AudioSrv.dll");
    result = sub_180060F54(v4, ModuleHandleW);
    if ( (int)result >= 0 )
      *(_BYTE *)(a1 + 74) = 1;
  }
  return result;
}
