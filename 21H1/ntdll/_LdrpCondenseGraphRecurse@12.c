/*
 * XREFs of _LdrpCondenseGraphRecurse@12 @ 0x4B2E2082
 * Callers:
 *     _LdrpCondenseGraph@4 @ 0x4B2E205C (_LdrpCondenseGraph@4.c)
 *     _LdrpCondenseGraphRecurse@12 @ 0x4B2E2082 (_LdrpCondenseGraphRecurse@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpCondenseGraphRecurse@12 @ 0x4B2E2082 (_LdrpCondenseGraphRecurse@12.c)
 *     _LdrpDestroyNode@4 @ 0x4B2E218A (_LdrpDestroyNode@4.c)
 *     _LdrpMergeNodes@8 @ 0x4B2E21AC (_LdrpMergeNodes@8.c)
 */

signed __int32 __fastcall LdrpCondenseGraphRecurse(_DWORD *a1, _DWORD *a2, signed __int32 *a3)
{
  int v3; // eax
  signed __int32 **v5; // ecx
  signed __int32 *v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // esi
  unsigned int v9; // eax
  signed __int32 result; // eax
  signed __int32 *v11; // edx
  signed __int32 *v12; // esi
  signed __int32 *v13; // ecx
  _DWORD *v14; // esi
  _DWORD *v15; // ecx
  _DWORD *v16; // [esp+Ch] [ebp-Ch]
  _DWORD *v17; // [esp+10h] [ebp-8h] BYREF
  signed __int32 *v18; // [esp+14h] [ebp-4h]

  v3 = ++*a2;
  v17 = a2;
  v5 = (signed __int32 **)(a1 + 9);
  a1[10] = v3;
  a1[5] = v3;
  v6 = (signed __int32 *)*a3;
  v18 = (signed __int32 *)v5;
  *v5 = v6;
  *a3 = (signed __int32)v5;
  v7 = (_DWORD *)a1[6];
  if ( v7 )
  {
    while ( 1 )
    {
      v7 = (_DWORD *)*v7;
      v16 = v7;
      v8 = (_DWORD *)v7[1];
      if ( (int)v8[8] <= 5 )
        break;
LABEL_9:
      if ( v7 == (_DWORD *)a1[6] )
        goto LABEL_10;
    }
    v9 = v8[10];
    if ( v9 )
    {
      if ( !v8[9] )
      {
LABEL_7:
        if ( v8[8] == -3 )
          a1[8] = -3;
        goto LABEL_9;
      }
    }
    else
    {
      LdrpCondenseGraphRecurse(a3);
      v9 = v8[5];
      v7 = v16;
    }
    if ( a1[5] > v9 )
      a1[5] = v9;
    goto LABEL_7;
  }
LABEL_10:
  result = a1[5];
  if ( result == a1[10] )
  {
    v11 = (signed __int32 *)*a3;
    if ( *a3 )
      *a3 = *v11;
    result = 0;
    if ( a1 + 9 != v11 )
    {
      do
      {
        v12 = (signed __int32 *)*a3;
        *v11 = result;
        result = (signed __int32)v11;
        if ( v12 )
          *a3 = *v12;
        v13 = v11;
        v11 = v12;
      }
      while ( v18 != v12 );
      v17 = (_DWORD *)result;
      if ( v13 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        LdrpMergeNodes(a1, &v17);
        result = RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        v14 = v17;
        while ( v14 )
        {
          v15 = v14;
          v14 = (_DWORD *)*v14;
          result = LdrpDestroyNode(v15 - 9);
        }
      }
    }
    a1[9] = 0;
    if ( a1[8] == 5 )
      a1[8] = 6;
  }
  return result;
}
