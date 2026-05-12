/*
 * XREFs of RaidUnitHandleSpecialErrorConditions @ 0x1C000C13C
 * Callers:
 *     RaUnitAsyncError @ 0x1C000BE48 (RaUnitAsyncError.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C00199C4 (GetSrbScsiData.c)
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqDDD @ 0x1C004AD58 (WPP_SF_qqDDD.c)
 */

_UNKNOWN **__fastcall RaidUnitHandleSpecialErrorConditions(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbx
  _BYTE *v4; // r8
  unsigned __int8 v5; // r9
  unsigned __int8 v6; // si
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // di
  char v11; // dl
  _BYTE *v12; // rcx
  unsigned __int8 *v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned __int8 v18; // [rsp+78h] [rbp+10h] BYREF
  _BYTE *v19; // [rsp+80h] [rbp+18h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a2 + 168);
  v4 = 0LL;
  v5 = 0;
  v19 = 0LL;
  v6 = 0;
  v18 = 0;
  v7 = 0;
  v8 = 0;
  if ( *(_BYTE *)(v3 + 2) == 40 )
  {
    if ( !*(_DWORD *)(v3 + 20) )
    {
      result = (_UNKNOWN **)GetSrbScsiData(v3, 0, 0, 0, (__int64)&v19, (__int64)&v18);
      v4 = v19;
      v5 = v18;
    }
  }
  else
  {
    v4 = *(_BYTE **)(v3 + 32);
    v5 = *(_BYTE *)(v3 + 11);
  }
  if ( *(char *)(v3 + 3) >= 0 || !v4 )
    return result;
  v11 = 0;
  if ( v5 )
  {
    v12 = &v4[v5];
    result = (_UNKNOWN **)(v4 + 8);
    if ( (unsigned __int8)((*v4 & 0x7F) - 114) > 1u )
    {
      if ( result > (_UNKNOWN **)v12 )
        goto LABEL_11;
      v13 = v4 + 13;
      v14 = (unsigned __int8)v4[7] + 8;
      v15 = v5;
      v6 = v4[2] & 0xF;
      if ( v14 <= v5 )
        v15 = v14;
      v16 = (unsigned int)v15;
      if ( v13 <= &v4[v15] )
        v7 = v4[12];
      result = (_UNKNOWN **)(v4 + 14);
      if ( v4 + 14 <= &v4[v16] )
        v8 = *v13;
    }
    else
    {
      if ( result > (_UNKNOWN **)v12 )
        goto LABEL_11;
      v7 = v4[2];
      v6 = v4[1] & 0xF;
      v8 = v4[3];
    }
    v11 = 1;
  }
LABEL_11:
  if ( v11 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qqDDD(WPP_GLOBAL_Control->AttachedDevice, v7, v6, a1, v3, v6, v7, v8);
    }
    result = (_UNKNOWN **)&unk_1C005A000;
    while ( *(_BYTE *)result != v6 || *((_BYTE *)result + 1) != v7 || *((_BYTE *)result + 2) != v8 )
    {
      result += 2;
      if ( !result[1] )
        return result;
    }
    return (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64))result[1])(a1, a2);
  }
  return result;
}
