/*
 * XREFs of _RtlpIsEmptyImageFileOptionsKey@4 @ 0x4B342529
 * Callers:
 *     _RtlpDeleteEmptyImageFileOptionsKey@4 @ 0x4B342483 (_RtlpDeleteEmptyImageFileOptionsKey@4.c)
 *     _RtlpIsEmptyImageFileOptionsKey@4 @ 0x4B342529 (_RtlpIsEmptyImageFileOptionsKey@4.c)
 * Callees:
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _NtEnumerateValueKey@24 @ 0x4B2F2A90 (_NtEnumerateValueKey@24.c)
 *     _ZwEnumerateKey@24 @ 0x4B2F2CA0 (_ZwEnumerateKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpIsEmptyImageFileOptionsKey@4 @ 0x4B342529 (_RtlpIsEmptyImageFileOptionsKey@4.c)
 */

char __thiscall RtlpIsEmptyImageFileOptionsKey(void *this)
{
  int v1; // ebx
  int i; // edi
  int inited; // esi
  int v4; // edi
  int v5; // esi
  char IsEmptyImageFileOptionsKey; // bl
  unsigned __int16 v8[4]; // [esp+Ch] [ebp-274h] BYREF
  unsigned __int16 v9[4]; // [esp+14h] [ebp-26Ch] BYREF
  _DWORD v10[6]; // [esp+1Ch] [ebp-264h] BYREF
  int v11; // [esp+34h] [ebp-24Ch]
  char v12[4]; // [esp+38h] [ebp-248h] BYREF
  HANDLE Handle; // [esp+3Ch] [ebp-244h] BYREF
  unsigned __int16 v14; // [esp+40h] [ebp-240h] BYREF
  unsigned __int16 v15; // [esp+42h] [ebp-23Eh]
  unsigned __int16 *v16; // [esp+44h] [ebp-23Ch]
  _BYTE v17[8]; // [esp+48h] [ebp-238h] BYREF
  unsigned __int16 v18; // [esp+50h] [ebp-230h]
  unsigned __int16 v19; // [esp+54h] [ebp-22Ch] BYREF
  char v20; // [esp+58h] [ebp-228h] BYREF

  Handle = 0;
  v1 = (int)this;
  v11 = (int)this;
  for ( i = 0; ; ++i )
  {
    inited = NtEnumerateValueKey(v1, i, 0, (int)v17, 560, (int)v12);
    if ( inited >= 0 )
    {
      if ( i )
        break;
      v14 = v18;
      v15 = v18;
      v16 = &v19;
      if ( RtlInitUnicodeStringEx((int)v9, L"UseFilter") < 0 )
        break;
      inited = RtlInitUnicodeStringEx((int)v8, L"FilterFullPath");
      if ( inited < 0 || RtlCompareUnicodeString(&v14, v9, 1) && RtlCompareUnicodeString(&v14, v8, 1) )
        break;
    }
    if ( inited < 0 )
    {
      if ( inited == -2147483622 )
      {
        v4 = 0;
        do
        {
          v5 = ZwEnumerateKey(v1, v4, 0, (int)v17, 560, (int)v12);
          if ( v5 >= 0 )
          {
            v10[4] = 0;
            v10[5] = 0;
            v14 = v19;
            v15 = v19;
            v16 = (unsigned __int16 *)&v20;
            v10[2] = &v14;
            v10[0] = 24;
            v10[1] = v1;
            v10[3] = 576;
            v5 = ZwOpenKey((int)&Handle, 9, (int)v10);
            if ( v5 >= 0 )
            {
              IsEmptyImageFileOptionsKey = RtlpIsEmptyImageFileOptionsKey(Handle);
              NtClose(Handle);
              if ( !IsEmptyImageFileOptionsKey )
                return 0;
              v1 = v11;
            }
          }
          ++v4;
        }
        while ( v5 >= 0 );
        if ( v5 == -2147483622 )
          return 1;
      }
      return 0;
    }
  }
  return 0;
}
