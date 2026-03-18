/*
 * XREFs of ?DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C0071D60
 * Callers:
 *     ?AppendFriendlyName@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C03BAA80 (-AppendFriendlyName@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEBUDisplayIDObj@@AEAPEBU_DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK@@@Z @ 0x1C0071E40 (-DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEBUDisplayIDObj@@AEAPEBU_DISPLAYID_PRODUCT_IDEN.c)
 *     ?IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ @ 0x1C0072218 (-IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_GetUserFriendlyName(
        const struct DisplayIDObj *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned __int8 v8; // bl
  unsigned __int8 v9; // al
  unsigned __int16 *v10; // rsi
  __int64 v11; // rbp
  PUCHAR SourceCharacter; // [rsp+20h] [rbp-28h] BYREF
  const struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v13; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 || !a4 )
    return 3221225485LL;
  *a4 = 0;
  v13 = 0LL;
  result = DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK(a1, &v13);
  if ( (int)result >= 0 )
  {
    if ( DisplayID_ProductId_Parser::IsValidBlock((DisplayID_ProductId_Parser *)&v13) )
    {
      v8 = *(_BYTE *)(v7 + 14);
      if ( v8 )
      {
        SourceCharacter = (PUCHAR)(v7 + 15);
        if ( v8 <= 0xDu )
        {
          v9 = v8;
        }
        else
        {
          v8 = 13;
          v9 = 13;
        }
        v10 = a2;
        v11 = v9;
        do
        {
          *v10++ = RtlAnsiCharToUnicodeChar(&SourceCharacter);
          --v11;
        }
        while ( v11 );
      }
      *a4 = v8;
      a2[v8] = 0;
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
