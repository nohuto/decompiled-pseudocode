/*
 * XREFs of _RtlGetAppContainerNamedObjectPath@16 @ 0x4B2E7930
 * Callers:
 *     <none>
 * Callees:
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 */

int __stdcall RtlGetAppContainerNamedObjectPath(int a1, int a2, char a3, _DWORD *a4)
{
  int v4; // esi
  int v5; // ebx
  int result; // eax
  char v7; // al
  int v8; // [esp-Ch] [ebp-BCh]
  void *Buf1; // [esp+4h] [ebp-ACh] BYREF
  void *Buf2; // [esp+50h] [ebp-60h] BYREF
  int v11; // [esp+9Ch] [ebp-14h] BYREF
  int v12; // [esp+A0h] [ebp-10h] BYREF
  int v13; // [esp+A4h] [ebp-Ch] BYREF
  _BYTE v14[6]; // [esp+A8h] [ebp-8h] BYREF
  char v15; // [esp+AEh] [ebp-2h]
  char v16; // [esp+AFh] [ebp-1h]

  if ( !a4 )
    return -1073741811;
  v4 = a1;
  if ( a1 && a2 )
    return -1073741776;
  v11 = 0;
  v12 = 0;
  v15 = 0;
  v5 = a3 != 0 ? 13 : 8;
  if ( a2 )
  {
    v8 = -4;
    v16 = 0;
LABEL_6:
    v4 = v8;
    if ( a2 )
      goto LABEL_15;
    goto LABEL_7;
  }
  v16 = 1;
  if ( !a1 )
  {
    v8 = -6;
    goto LABEL_6;
  }
LABEL_7:
  v13 = 0;
  result = ZwQueryInformationToken(v4, 29, &v13, 4, v14);
  if ( result < 0 )
    return result;
  if ( !v13 )
  {
    *a4 = 0;
    a4[1] = 0;
    return 0;
  }
LABEL_15:
  if ( !a3 )
  {
    v7 = v15;
LABEL_27:
    if ( !v7 )
      return RtlpGetTokenNamedObjectPath(v4, a2, v5, a4);
LABEL_28:
    v5 |= 2u;
    return RtlpGetTokenNamedObjectPath(v4, a2, v5, a4);
  }
  v7 = 1;
  if ( !v16 )
    goto LABEL_27;
  result = ZwQueryInformationToken(-4, 42, &v12, 4, v14);
  if ( result < 0 )
    return result;
  if ( !v12 )
  {
    v7 = 0;
    goto LABEL_27;
  }
  result = ZwQueryInformationToken(v4, 42, &v11, 4, v14);
  if ( result >= 0 )
  {
    if ( !v11 )
      return -1073741637;
    result = ZwQueryInformationToken(-4, 1, &Buf2, 76, v14);
    if ( result >= 0 )
    {
      result = ZwQueryInformationToken(v4, 1, &Buf1, 76, v14);
      if ( result >= 0 )
      {
        if ( !RtlEqualSid((unsigned __int8 *)Buf1, Buf2) )
          return -1073741637;
        goto LABEL_28;
      }
    }
  }
  return result;
}
