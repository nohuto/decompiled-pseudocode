/*
 * XREFs of USBMidiInCreatePin @ 0x1C0008300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBMidiInCreatePin(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rsi
  unsigned int v4; // r8d
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // r13
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  unsigned int v11; // r10d
  unsigned int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // r9
  unsigned int v15; // edx
  unsigned int v16; // r11d
  KIRQL v17; // cl
  _QWORD *v18; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  v5 = *(_QWORD *)(v1 + 144);
  v6 = *(_QWORD *)(v1 + 152);
  v7 = *(_QWORD *)(v5 + 200);
  *(_QWORD *)(v6 + 24) = a1;
  v8 = (_QWORD *)(v6 + 80);
  v9 = v6 + 80;
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(v5 + 208);
  *(_DWORD *)(v6 + 20) = *(_DWORD *)(v5 + 212);
  *(_QWORD *)(v6 + 72) = v6 + 64;
  *(_QWORD *)(v6 + 64) = v6 + 64;
  v10 = (_QWORD *)(v6 + 96);
  *(_QWORD *)(v6 + 88) = v6 + 80;
  *(_QWORD *)(v6 + 80) = v6 + 80;
  do
  {
    if ( *v8 != v9 )
      goto LABEL_18;
    v10[1] = v8;
    ++v4;
    *v10 = v9;
    *v8 = v10;
    v8 = v10;
    *(_QWORD *)(v6 + 88) = v10;
    v10 += 4;
  }
  while ( v4 < 0x400 );
  v11 = *(_DWORD *)(v7 + 32);
  v12 = 0;
  if ( !v11 )
    return (unsigned int)-1073741808;
  do
  {
    if ( v3 )
      goto LABEL_14;
    v13 = 168LL * v12;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 200) + 40LL) + v13 + 2) == *(_BYTE *)(*(_QWORD *)(v5 + 168) + 2LL) )
    {
      v14 = *(_QWORD *)(v7 + 40) + v13;
      v15 = 0;
      v16 = *(_DWORD *)(v14 + 24);
      if ( v16 )
      {
        while ( *(unsigned __int8 *)(v15 + *(_QWORD *)(v14 + 32)) != *(_DWORD *)(v6 + 16) )
        {
          if ( ++v15 >= v16 )
            goto LABEL_12;
        }
        v3 = v14;
      }
    }
LABEL_12:
    ++v12;
  }
  while ( v12 < v11 );
  if ( v3 )
  {
LABEL_14:
    *(_QWORD *)(v6 + 40) = v3;
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 104));
    v18 = *(_QWORD **)(v3 + 56);
    if ( *v18 != v3 + 48 )
LABEL_18:
      __fastfail(3u);
    *(_QWORD *)(v6 + 8) = v18;
    *(_QWORD *)v6 = v3 + 48;
    *v18 = v6;
    *(_QWORD *)(v3 + 56) = v6;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 104), v17);
  }
  else
  {
    return (unsigned int)-1073741808;
  }
  return v2;
}
