/*
 * XREFs of DeviceQueryCapabilities @ 0x1C0023100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceQueryCapabilities(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  _DWORD *v5; // r8
  __int64 v6; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  result = 0LL;
  if ( *(_WORD *)a3 < 0x40u )
    return 3221225473LL;
  *(_DWORD *)(a3 + 4) |= 0x280u;
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_DWORD *)(a3 + 56) = 0;
  *(_DWORD *)(a3 + 60) = 20000;
  if ( *(_DWORD *)(v3 + 532) == 4 )
  {
    v5 = (_DWORD *)(a3 + 24);
    v6 = 5LL;
    do
    {
      if ( *v5 == 3 )
        *v5 = 4;
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
