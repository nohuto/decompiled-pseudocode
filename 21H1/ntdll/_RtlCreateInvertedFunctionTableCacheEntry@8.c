/*
 * XREFs of _RtlCreateInvertedFunctionTableCacheEntry@8 @ 0x4B36D377
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _RtlRemoveInvertedFunctionTable@4 @ 0x4B2E680E (_RtlRemoveInvertedFunctionTable@4.c)
 */

void __usercall RtlCreateInvertedFunctionTableCacheEntry(PVOID BaseAddress@<ecx>, int a2@<edx>, ULONG_PTR *a3@<edi>)
{
  unsigned int v3; // esi
  int v4; // edi
  int v5; // [esp+Ch] [ebp-18h] BYREF
  int v6; // [esp+10h] [ebp-14h]
  int v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+18h] [ebp-Ch]
  int v9; // [esp+1Ch] [ebp-8h]
  int v10; // [esp+20h] [ebp-4h]
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  v10 = 0;
  v9 = a2;
  if ( (unsigned int)BaseAddress < dword_4B3A9374[0]
    || (unsigned int)BaseAddress >= dword_4B3A9374[0] + dword_4B3A9378[0] )
  {
    v3 = RtlpxLookupFunctionTable(BaseAddress, (int)&v5, (int)&savedregs, a3);
  }
  else
  {
    v5 = dword_4B3A9370[0];
    v6 = dword_4B3A9370[1];
    v7 = dword_4B3A9370[2];
    v8 = dword_4B3A9370[3];
    v3 = dword_4B3A9370[0];
  }
  if ( v3 )
  {
    v4 = v6;
    v10 = v8;
  }
  else
  {
    v4 = v9;
  }
  LdrProtectMrdata(0);
  dword_4B3A9370[0] = v3;
  dword_4B3A937C[0] = v10;
  dword_4B3A9374[0] = v4;
  dword_4B3A9378[0] = v9;
  RtlRemoveInvertedFunctionTable();
  LdrProtectMrdata(1);
}
