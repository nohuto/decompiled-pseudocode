/*
 * XREFs of _RtlpHpVsContextFreeList@12 @ 0x4B37F65A
 * Callers:
 *     _RtlpHpHeapCompact@8 @ 0x4B378991 (_RtlpHpHeapCompact@8.c)
 *     _RtlpHpVsContextFree@20 @ 0x4B37F419 (_RtlpHpVsContextFree@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpVsContextFreeInternal@20 @ 0x4B37F546 (_RtlpHpVsContextFreeInternal@20.c)
 */

void __fastcall RtlpHpVsContextFreeList(PRTL_SRWLOCK SRWLock, int a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v4; // ebx
  PRTL_SRWLOCK v5; // ebx
  int v6; // eax
  int v7; // [esp+Ch] [ebp-18h] BYREF
  PRTL_SRWLOCK SRWLocka; // [esp+10h] [ebp-14h]
  int v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+18h] [ebp-Ch]
  PRTL_SRWLOCK v11; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h]

  v12 = a2;
  v3 = a3;
  v4 = a2 & 1;
  v11 = SRWLock;
  v10 = v4;
  if ( (a2 & 1) == 0 )
  {
    v7 = 0;
    v9 = 0;
    SRWLocka = SRWLock;
    RtlAcquireSRWLockExclusive(SRWLock);
    a2 = v12;
  }
  if ( a3 )
  {
    v5 = v11;
    do
    {
      v6 = (int)(v3 - 2);
      v3 = (_DWORD *)*v3;
      RtlpHpVsContextFreeInternal((int)v5, v6, a2, (int)&v7);
      a2 = v12;
    }
    while ( v3 );
    v4 = v10;
  }
  if ( !v4 )
    RtlReleaseSRWLockExclusive(SRWLocka);
}
