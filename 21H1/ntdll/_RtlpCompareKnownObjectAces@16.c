/*
 * XREFs of _RtlpCompareKnownObjectAces@16 @ 0x4B3476F8
 * Callers:
 *     _RtlpCompareAces@16 @ 0x4B2D8505 (_RtlpCompareAces@16.c)
 * Callees:
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _RtlEqualPrefixSid@8 @ 0x4B2D8300 (_RtlEqualPrefixSid@8.c)
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

char __fastcall RtlpCompareKnownObjectAces(unsigned __int8 *a1, unsigned __int8 *a2, _WORD *a3, _WORD *Buf2)
{
  int v4; // esi
  int v5; // edi
  _DWORD *v6; // ebx
  _DWORD *v7; // ecx
  _DWORD *v8; // edi
  _DWORD *v9; // edx
  int v10; // esi
  int v12; // eax
  bool v13; // al
  int v14; // [esp+10h] [ebp-4Ch]
  void *Buf1; // [esp+18h] [ebp-44h]
  unsigned __int8 *Buf1a; // [esp+18h] [ebp-44h]
  int v18; // [esp+1Ch] [ebp-40h]
  int v19; // [esp+1Ch] [ebp-40h]
  unsigned __int8 *v20; // [esp+20h] [ebp-3Ch] BYREF
  __int16 v21; // [esp+24h] [ebp-38h]
  _BYTE v22[8]; // [esp+28h] [ebp-34h] BYREF
  int v23; // [esp+30h] [ebp-2Ch]

  v4 = *a1;
  v5 = *a2;
  v20 = a2;
  if ( RtlBaseAceType[v5] != RtlBaseAceType[v4] || RtlIsSystemAceType[v5] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  v6 = a2 + 12;
  v14 = *((_DWORD *)a2 + 2) & 1;
  v7 = v14 != 0 ? (_DWORD *)(a2 + 12) : 0;
  Buf1 = (void *)(*((_DWORD *)a2 + 2) & 2);
  if ( Buf1 )
  {
    if ( v14 )
      v6 = a2 + 28;
  }
  else
  {
    v6 = 0;
  }
  v8 = a1 + 12;
  v18 = *((_DWORD *)a1 + 2) & 1;
  v9 = v18 != 0 ? (_DWORD *)(a1 + 12) : 0;
  v10 = *((_DWORD *)a1 + 2) & 2;
  if ( v10 )
  {
    if ( v18 )
      v8 = a1 + 28;
  }
  else
  {
    v8 = 0;
  }
  if ( v6 )
  {
    if ( !v8 || *v6 != *v8 || v6[1] != v8[1] || v6[2] != v8[2] || v6[3] != v8[3] )
      return 0;
  }
  else if ( v8 )
  {
    return 0;
  }
  if ( v7 )
  {
    if ( !v9
      || *v7 != *v9
      || v7[1] != *(v18 != 0 ? (_DWORD *)(a1 + 16) : (_DWORD *)4)
      || v7[2] != *(v18 != 0 ? (_DWORD *)(a1 + 20) : (_DWORD *)8)
      || v7[3] != *(v18 != 0 ? (_DWORD *)(a1 + 24) : (_DWORD *)12) )
    {
      return 0;
    }
  }
  else if ( v9 )
  {
    return 0;
  }
  v19 = 16 * v18;
  Buf1a = &v20[16 * v14 + (Buf1 != 0 ? 28 : 12)];
  if ( !RtlEqualSid(Buf1a, &a1[(v10 != 0 ? 0x10 : 0) + 12 + v19]) )
  {
    if ( (v20[1] & 3 | ~v20[1] & 8) != 8 || !a3 && !Buf2 )
      return 0;
    v21 = 768;
    v20 = 0;
    if ( RtlInitializeSid((int)v22, (int)&v20, 1u) < 0 )
      return 0;
    v23 = 0;
    if ( !RtlEqualPrefixSid(&a1[(v10 != 0 ? 0x10 : 0) + 12 + v19], v22) )
      return 0;
    v12 = *(_DWORD *)&a1[v19 + (v10 != 0 ? 36 : 20)];
    if ( v12 )
    {
      if ( v12 != 1 || !Buf2 )
        return 0;
      v13 = RtlEqualSid(Buf1a, Buf2);
    }
    else
    {
      if ( !a3 )
        return 0;
      v13 = RtlEqualSid(Buf1a, a3);
    }
    if ( !v13 )
      return 0;
  }
  return 1;
}
