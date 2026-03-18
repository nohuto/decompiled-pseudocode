/*
 * XREFs of ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C011C3AC
 * Callers:
 *     _RegisterDManipHook @ 0x1C011C264 (_RegisterDManipHook.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C011C418 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __fastcall RtlStringCbCatW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 v4; // rdx
  unsigned __int16 *v5; // rax
  NTSTATUS result; // eax
  __int64 v7; // rcx
  size_t v8; // [rsp+20h] [rbp-18h]

  v4 = 130LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    v7 = 130 - v4;
  else
    v7 = 0LL;
  if ( v4 )
    return RtlStringCopyWorkerW(&a1[v7], 130 - v7, (size_t *)(130 - v7), L"\\System32\\directmanipulation.dll", v8);
  return result;
}
