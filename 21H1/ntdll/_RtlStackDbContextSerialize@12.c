/*
 * XREFs of _RtlStackDbContextSerialize@12 @ 0x4B38A040
 * Callers:
 *     _RtlpHpStackTraceSerialize@12 @ 0x4B36E775 (_RtlpHpStackTraceSerialize@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlStackDbContextSerialize(
        _RTL_SRWLOCK *a1,
        int (__thiscall *a2)(_DWORD, unsigned int *, int, int),
        int a3)
{
  int v5; // esi
  _DWORD *Value; // ebx
  _DWORD *v7; // edi
  _DWORD *v8; // edx
  _DWORD *v9; // ecx
  _RTL_SRWLOCK *v10; // eax
  _DWORD **v11; // ecx
  unsigned int v12; // eax
  _DWORD *i; // edx
  _DWORD *v14; // ebx
  _DWORD *v15; // edi
  _DWORD *v16; // edx
  _DWORD *v17; // ecx
  _DWORD *j; // ecx
  _DWORD **k; // edx
  unsigned int v23; // [esp+58h] [ebp-24h] BYREF
  _DWORD *v24; // [esp+5Ch] [ebp-20h] BYREF
  _DWORD *v25; // [esp+60h] [ebp-1Ch] BYREF
  PRTL_SRWLOCK SRWLock; // [esp+64h] [ebp-18h]
  PRTL_SRWLOCK v27; // [esp+68h] [ebp-14h]
  _DWORD v28[2]; // [esp+6Ch] [ebp-10h] BYREF
  __int16 v29; // [esp+74h] [ebp-8h]
  __int16 v30; // [esp+76h] [ebp-6h]

  SRWLock = a1 + 6;
  RtlAcquireSRWLockExclusive(a1 + 6);
  v27 = a1 + 7;
  RtlAcquireSRWLockExclusive(a1 + 7);
  v29 = 1;
  v30 = 4;
  v28[0] = a1->0;
  v28[1] = a1[3].0;
  v5 = a2(a2, v28, 12, a3);
  if ( v5 >= 0 )
  {
    Value = (_DWORD *)a1[2].Value;
    v7 = Value;
    v8 = Value;
    if ( Value )
    {
      v9 = (_DWORD *)*Value;
      if ( (*Value & 0x80000002) == 0x80000002 )
        v9 = (_DWORD *)*Value;
      if ( ((unsigned __int8)v9 & 1) == 0 )
        goto LABEL_21;
      v10 = a1;
      v8 = (_DWORD *)a1[2].Value;
    }
    else
    {
      v10 = a1;
    }
    v11 = (_DWORD **)(Value + 1);
    v12 = (unsigned int)&v8[v10[1].Value >> 5];
    while ( (unsigned int)v11 < v12 )
    {
      if ( ((unsigned int)*v11 & 1) == 0 )
      {
        v7 = *v11;
        Value = v11;
        goto LABEL_35;
      }
      ++v11;
    }
    v9 = 0;
LABEL_27:
    while ( v9 )
    {
      v24 = v9;
      v23 = v9[2];
      v5 = a2(a2, &v23, 4, a3);
      if ( v5 < 0 )
        goto LABEL_42;
      v5 = a2(a2, (unsigned int *)&v24, 4, a3);
      if ( v5 < 0 )
        goto LABEL_42;
      v5 = a2(a2, v24 + 3, 4 * *((unsigned __int8 *)v24 + 11), a3);
      if ( v5 < 0 )
        goto LABEL_42;
      if ( !v7 )
        goto LABEL_22;
      v9 = (_DWORD *)*v7;
      if ( (*v7 & 0x80000002) == 0x80000002 )
        v9 = (_DWORD *)*v7;
      if ( ((unsigned __int8)v9 & 1) != 0 )
      {
LABEL_22:
        for ( i = Value + 1; ; ++i )
        {
          if ( (unsigned int)i >= a1[2].Value + 4 * (a1[1].Value >> 5) )
          {
            v9 = 0;
            goto LABEL_27;
          }
          if ( (*i & 1) == 0 )
            break;
        }
        v7 = (_DWORD *)*i;
        Value = i;
LABEL_35:
        v9 = v7;
      }
      else
      {
LABEL_21:
        v7 = v9;
      }
    }
    v14 = (_DWORD *)a1[5].Value;
    v15 = v14;
    v16 = v14;
    if ( v14 )
    {
      v17 = (_DWORD *)*v14;
      if ( (*v14 & 0x80000002) == 0x80000002 )
        v17 = (_DWORD *)*v14;
      if ( ((unsigned __int8)v17 & 1) == 0 )
        goto LABEL_51;
      v16 = (_DWORD *)a1[5].Value;
    }
    for ( j = v14 + 1; ; ++j )
    {
      if ( j >= &v16[a1[4].Value >> 5] )
      {
LABEL_39:
        v17 = 0;
        goto LABEL_40;
      }
      if ( (*j & 1) == 0 )
        break;
    }
    v15 = (_DWORD *)*j;
    v14 = j;
LABEL_58:
    v17 = v15;
LABEL_40:
    while ( v17 )
    {
      v25 = v17;
      v23 = v17[2];
      v5 = a2(a2, &v23, 4, a3);
      if ( v5 < 0 )
        goto LABEL_42;
      v5 = a2(a2, (unsigned int *)&v25, 4, a3);
      if ( v5 < 0 )
        goto LABEL_42;
      v5 = a2(a2, v25 + 3, 4 * ((unsigned int)(HIBYTE(v23) + 7) >> 3), a3);
      if ( v5 < 0 )
        goto LABEL_42;
      if ( !v15 )
        goto LABEL_52;
      v17 = (_DWORD *)*v15;
      if ( (*v15 & 0x80000002) == 0x80000002 )
        v17 = (_DWORD *)*v15;
      if ( ((unsigned __int8)v17 & 1) != 0 )
      {
LABEL_52:
        for ( k = (_DWORD **)(v14 + 1); (unsigned int)k < a1[5].Value + 4 * (a1[4].Value >> 5); ++k )
        {
          if ( ((unsigned int)*k & 1) == 0 )
          {
            v15 = *k;
            v14 = k;
            goto LABEL_58;
          }
        }
        goto LABEL_39;
      }
LABEL_51:
      v15 = v17;
    }
    v5 = a2(a2, 0, 0, a3);
  }
LABEL_42:
  RtlReleaseSRWLockExclusive(SRWLock);
  RtlReleaseSRWLockExclusive(v27);
  return v5;
}
