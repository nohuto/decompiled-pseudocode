/*
 * XREFs of _RtlpHpLfhContextCleanup@4 @ 0x4B3764C9
 * Callers:
 *     _RtlpHpHeapDestroy@4 @ 0x4B378C76 (_RtlpHpHeapDestroy@4.c)
 * Callees:
 *     _RtlpHpLfhOwnerCleanup@8 @ 0x4B376752 (_RtlpHpLfhOwnerCleanup@8.c)
 */

int __thiscall RtlpHpLfhContextCleanup(int *this)
{
  int v2; // ebx
  int *v3; // esi
  int result; // eax
  int v5; // edx
  unsigned int v6; // esi
  int v7; // ebx
  unsigned int v8; // [esp+Ch] [ebp-14h]
  int v9; // [esp+14h] [ebp-Ch]
  int *v10; // [esp+18h] [ebp-8h]
  int v11; // [esp+1Ch] [ebp-4h]

  v2 = 129;
  v9 = 129;
  v3 = this + 32;
  v10 = this + 32;
  do
  {
    result = *v3;
    if ( (*v3 & 1) == 0 )
    {
      v5 = *v3;
      v11 = *v3;
      v8 = *(unsigned __int8 *)(*v3 + 2);
      if ( *(_BYTE *)(*v3 + 2) )
      {
        v6 = 0;
        v7 = v5;
        do
          RtlpHpLfhOwnerCleanup(this, *(_DWORD *)(*(_DWORD *)(v7 + 52) + 4 * v6++));
        while ( v6 < v8 );
        v3 = v10;
        v2 = v9;
        v5 = v11;
      }
      result = RtlpHpLfhOwnerCleanup(this, v5);
    }
    ++v3;
    --v2;
    v10 = v3;
    v9 = v2;
  }
  while ( v2 );
  return result;
}
