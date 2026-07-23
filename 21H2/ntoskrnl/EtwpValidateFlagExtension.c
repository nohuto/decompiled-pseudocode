/*
 * XREFs of EtwpValidateFlagExtension @ 0x1406B4AC0
 * Callers:
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140796F68 (EtwpUpdateTrace.c)
 * Callees:
 *     Feature_3257204026__private_IsEnabledDeviceUsage @ 0x1403F9428 (Feature_3257204026__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall EtwpValidateFlagExtension(unsigned int *a1)
{
  int v1; // ebx
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  unsigned __int16 *v6; // r9
  unsigned __int16 v7; // r10
  unsigned __int16 *v8; // rcx
  unsigned __int16 v9; // dx
  __int16 v10; // r8
  __int64 v11; // rax

  v1 = a1[18];
  if ( v1 >= 0 )
    return 0LL;
  if ( (unsigned int)Feature_3257204026__private_IsEnabledDeviceUsage() )
  {
    if ( BYTE2(v1) != 0xFF )
      return 3221225485LL;
    if ( (unsigned __int16)v1 < 0xB0u )
      return 3221225485LL;
    v4 = *a1;
    v5 = (unsigned __int16)v1;
    if ( v4 < (unsigned __int64)(unsigned __int16)v1 + 4 )
      return 3221225485LL;
  }
  else
  {
    if ( BYTE2(v1) != 0xFF )
      return 3221225485LL;
    if ( !(_WORD)v1 )
      return 3221225485LL;
    v5 = (unsigned __int16)v1;
    LODWORD(v4) = *a1;
    if ( *a1 < (unsigned __int64)(unsigned __int16)v1 + 4 )
      return 3221225485LL;
  }
  v6 = (unsigned __int16 *)((char *)a1 + v5);
  if ( (((_BYTE)v5 + (_BYTE)a1) & 1) == 0 )
  {
    if ( !*v6 || 4 * (unsigned __int64)*v6 > (unsigned int)v4 - (unsigned __int16)v1 )
      return 3221225485LL;
    v7 = v6[1];
    v8 = v6 + 2;
    v9 = *v6 - 1;
    v10 = 0;
    if ( !v7 )
    {
LABEL_19:
      if ( !v9 )
        return 0LL;
      return 3221225485LL;
    }
    while ( ((unsigned __int8)v8 & 1) == 0 )
    {
      if ( !v9 )
        return 3221225485LL;
      v11 = *v8;
      if ( v9 < (unsigned __int16)v11 )
        return 3221225485LL;
      v9 -= v11;
      v8 += 2 * v11;
      if ( (unsigned __int16)++v10 >= v7 )
        goto LABEL_19;
    }
  }
  return 3221226181LL;
}
