/*
 * XREFs of HdlspPutString @ 0x1409F10C0
 * Callers:
 *     HdlspDispatch @ 0x1409EFE80 (HdlspDispatch.c)
 *     HdlspProcessDumpCommand @ 0x1409F0C18 (HdlspProcessDumpCommand.c)
 *     HdlspPutMore @ 0x1409F1020 (HdlspPutMore.c)
 * Callees:
 *     HdlspUTF8Encode @ 0x1405B2B74 (HdlspUTF8Encode.c)
 *     HdlspSendStringAtBaud @ 0x1409F1350 (HdlspSendStringAtBaud.c)
 */

__int64 __fastcall HdlspPutString(char *a1)
{
  char *v1; // rbx
  PKSPIN_LOCK v2; // r10
  char *v3; // r9
  char *v4; // rax
  char v5; // al
  PKSPIN_LOCK v6; // rcx
  __int64 v8; // rcx
  char *v9; // rdx
  __int16 v10; // [rsp+30h] [rbp+8h] BYREF
  char v11; // [rsp+32h] [rbp+Ah]

  v1 = a1;
  v2 = HeadlessGlobals + 3;
  v3 = (char *)HeadlessGlobals[3];
  if ( *a1 )
  {
    while ( 1 )
    {
      v4 = (char *)(*v2 + 79);
      if ( v3 < v4 )
        break;
      *v4 = 0;
      HdlspSendStringAtBaud(*v2);
      v2 = HeadlessGlobals + 3;
      v3 = (char *)HeadlessGlobals[3];
LABEL_19:
      if ( !*v1 )
        goto LABEL_20;
    }
    v5 = *v1;
    if ( *v1 >= 0 )
      goto LABEL_17;
    if ( (unsigned __int8)v5 > 0xC0u )
    {
      if ( v5 == -60 )
      {
        v5 = 45;
        goto LABEL_34;
      }
      if ( (unsigned __int8)v5 <= 0xC7u )
        goto LABEL_34;
      if ( (unsigned __int8)v5 > 0xC9u )
      {
        if ( v5 == -51 )
        {
          v5 = 61;
          goto LABEL_17;
        }
        if ( (unsigned __int8)v5 <= 0xD8u )
          goto LABEL_34;
        if ( (unsigned __int8)v5 > 0xDAu )
        {
          if ( v5 == -37 )
            goto LABEL_31;
          if ( (unsigned __int8)v5 > 0xDFu )
            goto LABEL_34;
          goto LABEL_30;
        }
      }
    }
    else if ( (unsigned __int8)v5 < 0xBFu )
    {
      if ( (unsigned __int8)v5 < 0xA9u )
        goto LABEL_34;
      if ( (unsigned __int8)v5 > 0xAAu )
      {
        if ( v5 == -80 )
          goto LABEL_21;
        if ( v5 != -79 )
        {
          if ( v5 != -78 )
          {
            if ( v5 != -77 && v5 != -70 )
            {
              if ( (unsigned __int8)v5 > 0xBAu && (unsigned __int8)v5 <= 0xBCu )
                goto LABEL_16;
LABEL_34:
              if ( v5 < 0 )
              {
                v10 = 0;
                v11 = 0;
                HdlspUTF8Encode(*((_WORD *)HdlpsPcAnsiToUnicode + (v5 & 0x7F)), &v10);
                v8 = 3LL;
                v9 = (char *)&v10;
                do
                {
                  if ( *v9 )
                    *v3++ = *v9;
                  ++v9;
                  --v8;
                }
                while ( v8 );
                goto LABEL_18;
              }
LABEL_17:
              *v3++ = v5;
LABEL_18:
              ++v1;
              goto LABEL_19;
            }
LABEL_21:
            v5 = 124;
            goto LABEL_17;
          }
LABEL_31:
          v5 = 35;
          goto LABEL_17;
        }
LABEL_30:
        v5 = 37;
        goto LABEL_17;
      }
    }
LABEL_16:
    v5 = 43;
    goto LABEL_17;
  }
LABEL_20:
  v6 = HeadlessGlobals;
  *v3 = 0;
  return HdlspSendStringAtBaud(v6[3]);
}
