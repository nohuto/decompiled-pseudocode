/*
 * XREFs of sub_18003ECDC @ 0x18003ECDC
 * Callers:
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003ECDC(__int64 a1, __int64 a2, _QWORD *a3)
{
  const wchar_t *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax

  v3 = L"DataProtectionUnderLock-WindowsCore-Enabled";
  v4 = 0x7FFFFFFFLL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( a3 )
  {
    if ( v4 )
      *a3 = 0x7FFFFFFF - v4;
    else
      *a3 = 0LL;
  }
  if ( !v4 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}
