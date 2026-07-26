/*
 * XREFs of ?ndisNsiEnumerateAllSessionInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00B0D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisNsiEnumerateAllSessionInformation(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // ebp
  KIRQL v8; // al
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  _QWORD *v11; // rdx

  v1 = 0LL;
  v2 = 0;
  if ( *((_DWORD *)a1 + 8) == 1 )
  {
    v5 = *((_QWORD *)a1 + 2);
    v6 = *((_QWORD *)a1 + 5);
    v7 = *((_DWORD *)a1 + 22);
    v8 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E4B20);
    v9 = dword_1C00E6190;
    v10 = 0;
    if ( dword_1C00E6190 )
    {
      v11 = P;
      do
      {
        if ( v11[2] )
        {
          if ( (unsigned int)v1 < v7 )
          {
            if ( v5 )
              *(_DWORD *)(v5 + 4 * v1) = v10;
            if ( v6 )
              *(_DWORD *)(v6 + 4 * v1) = *(_DWORD *)v11;
            v1 = (unsigned int)(v1 + 1);
          }
          ++v2;
        }
        ++v10;
        v11 += 3;
      }
      while ( v10 < v9 );
    }
    KeReleaseSpinLock(&qword_1C00E4B20, v8);
    *((_DWORD *)a1 + 22) = v2;
    return v7 < v2 ? 0x105 : 0;
  }
  else if ( *((_DWORD *)a1 + 8) == 2 )
  {
    return 3221225474LL;
  }
  else
  {
    return 3221225485LL;
  }
}
