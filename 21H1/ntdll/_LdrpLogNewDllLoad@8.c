/*
 * XREFs of _LdrpLogNewDllLoad@8 @ 0x4B2D1499
 * Callers:
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpLogNewDllLoadInternal@20 @ 0x4B3309EF (_LdrpLogNewDllLoadInternal@20.c)
 */

struct _PEB *__fastcall LdrpLogNewDllLoad(int a1, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // esi
  struct _PEB *result; // eax
  char *v7; // eax
  size_t v8; // [esp-8h] [ebp-18h]

  v3 = 2147353476;
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (int)NtCurrentPeb()->SharedData + 554;
  else
    v4 = 2147353476;
  v5 = 2147353477;
  if ( *(_BYTE *)v4 )
  {
    v7 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v7 & 0x10) != 0 )
      goto LABEL_18;
  }
  result = (struct _PEB *)RtlGetCurrentServiceSessionId();
  if ( result )
  {
    result = NtCurrentPeb();
    v3 = (int)result->SharedData + 554;
  }
  if ( *(_BYTE *)v3 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId();
      if ( result )
      {
        result = NtCurrentPeb();
        v5 = (int)result->SharedData + 555;
      }
      if ( (*(_BYTE *)v5 & 0x20) != 0 )
      {
LABEL_18:
        HIDWORD(v8) = *(_DWORD *)(a2 + 40);
        LODWORD(v8) = *(unsigned __int16 *)(a2 + 36);
        return (struct _PEB *)LdrpLogNewDllLoadInternal(*(_DWORD *)(a2 + 148), v8);
      }
    }
  }
  return result;
}
