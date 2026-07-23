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

char __fastcall RtlpCompareKnownObjectAces(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, PSID Sid2)
{
  int v4; // esi
  int v5; // edi
  _DWORD *v6; // ebx
  _DWORD *v7; // ecx
  _DWORD *v8; // edi
  _DWORD *v9; // edx
  int v10; // esi
  int v12; // eax
  BOOLEAN v13; // al
  int v14; // [esp+10h] [ebp-4Ch]
  PSID v16; // [esp+18h] [ebp-44h]
  PSID v17; // [esp+18h] [ebp-44h]
  int v18; // [esp+1Ch] [ebp-40h]
  int v19; // [esp+1Ch] [ebp-40h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [esp+20h] [ebp-3Ch] BYREF
  _BYTE Sid[8]; // [esp+28h] [ebp-34h] BYREF
  int v22; // [esp+30h] [ebp-2Ch]

  v4 = *a1;
  v5 = *a2;
  *(_DWORD *)IdentifierAuthority.Value = a2;
  if ( RtlBaseAceType[v5] != RtlBaseAceType[v4] || RtlIsSystemAceType[v5] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  v6 = a2 + 12;
  v14 = *((_DWORD *)a2 + 2) & 1;
  v7 = v14 != 0 ? (_DWORD *)(a2 + 12) : 0;
  v16 = (PSID)(*((_DWORD *)a2 + 2) & 2);
  if ( v16 )
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
  v17 = (PSID)(16 * v14 + *(_DWORD *)IdentifierAuthority.Value + (v16 != 0 ? 28 : 12));
  if ( !RtlEqualSid(v17, &a1[(v10 != 0 ? 0x10 : 0) + 12 + v19]) )
  {
    if ( (*(_BYTE *)(*(_DWORD *)IdentifierAuthority.Value + 1) & 3 | ~*(_BYTE *)(*(_DWORD *)IdentifierAuthority.Value + 1) & 8) != 8
      || !a3 && !Sid2 )
    {
      return 0;
    }
    *(_WORD *)&IdentifierAuthority.Value[4] = 768;
    *(_DWORD *)IdentifierAuthority.Value = 0;
    if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) < 0 )
      return 0;
    v22 = 0;
    if ( !RtlEqualPrefixSid(&a1[(v10 != 0 ? 0x10 : 0) + 12 + v19], Sid) )
      return 0;
    v12 = *(_DWORD *)&a1[v19 + (v10 != 0 ? 36 : 20)];
    if ( v12 )
    {
      if ( v12 != 1 || !Sid2 )
        return 0;
      v13 = RtlEqualSid(v17, Sid2);
    }
    else
    {
      if ( !a3 )
        return 0;
      v13 = RtlEqualSid(v17, a3);
    }
    if ( !v13 )
      return 0;
  }
  return 1;
}
