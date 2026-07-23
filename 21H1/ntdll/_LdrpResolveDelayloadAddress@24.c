/*
 * XREFs of _LdrpResolveDelayloadAddress@24 @ 0x4B32FA18
 * Callers:
 *     _LdrpHandleUnprotectedDelayLoad@24 @ 0x4B32F837 (_LdrpHandleUnprotectedDelayLoad@24.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _LdrpResolveProcedureAddress@24 @ 0x4B306029 (_LdrpResolveProcedureAddress@24.c)
 *     _LdrpGetDelayloadAPIInfo@20 @ 0x4B32F789 (_LdrpGetDelayloadAPIInfo@20.c)
 *     _AVrfCallAPILookupCallback@20 @ 0x4B338404 (_AVrfCallAPILookupCallback@20.c)
 */

char *__fastcall LdrpResolveDelayloadAddress(
        int a1,
        char **a2,
        int a3,
        int a4,
        void (__thiscall *a5)(_DWORD, int *, char **, char *, int, _DWORD),
        int *a6)
{
  int v8; // eax
  char *v9; // esi
  int v11; // [esp-8h] [ebp-20h]
  int v12; // [esp+8h] [ebp-10h] BYREF
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  int v14; // [esp+10h] [ebp-8h] BYREF
  char *v15; // [esp+14h] [ebp-4h] BYREF

  v15 = 0;
  LdrpGetDelayloadAPIInfo(a1, a3, a4, &v12, &v13);
  v8 = LdrpResolveProcedureAddress(a1, a2, v12, v13, 0, &v15);
  *a6 = v8;
  if ( v8 < 0 )
    return v15;
  if ( AvrfpAPILookupCallbacksEnabled )
    AVrfCallAPILookupCallback(v15, 1, &v15);
  if ( !a5 )
    return v15;
  v14 = 0;
  v11 = *(_DWORD *)(a1 + 24);
  v9 = v15;
  a5(a5, &v14, a2, v15, v11, 0);
  if ( v14 )
    return (char *)v14;
  return v9;
}
