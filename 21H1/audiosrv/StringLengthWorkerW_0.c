/*
 * XREFs of StringLengthWorkerW_0 @ 0x18005FB14
 * Callers:
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180039470 (--0AtmosCheck@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringLengthWorkerW_0(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  const wchar_t *v3; // rax
  __int64 v4; // rcx
  HRESULT result; // eax

  v3 = L"Kernel-OneCore-DeviceFamilyID";
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
  if ( pcchLength )
  {
    if ( v4 )
      *pcchLength = 0x7FFFFFFF - v4;
    else
      *pcchLength = 0LL;
  }
  return result;
}
