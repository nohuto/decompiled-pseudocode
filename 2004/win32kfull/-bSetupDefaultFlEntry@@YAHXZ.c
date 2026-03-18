/*
 * XREFs of ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C02981AC
 * Callers:
 *     GreEnableEUDC @ 0x1C0009C00 (GreEnableEUDC.c)
 * Callees:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00126FC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0012808 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 */

__int64 bSetupDefaultFlEntry(void)
{
  char *v0; // rbx
  unsigned int v1; // esi
  unsigned int i; // edi
  __int64 v3; // rcx
  unsigned __int16 *v4; // r14
  PFTOBJ *v5; // rcx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+A0h] [rbp+40h] BYREF
  struct PFF *v13; // [rsp+A8h] [rbp+48h] BYREF
  struct _FONTHASH **v14; // [rsp+B0h] [rbp+50h] BYREF

  v0 = (char *)&unk_1C0334A9C;
  v14 = gpPFTPublic;
  v1 = 0;
  for ( i = 0; i < 7; ++i )
  {
    if ( *((_DWORD *)v0 - 31) && *(_WORD *)v0 && !*(_QWORD *)(v0 + 524) )
    {
      v3 = 664LL * i;
      v10 = 0LL;
      v11[0] = &v10;
      v12 = 0;
      v13 = 0LL;
      v11[1] = (char *)&FontAssocDefaultTable + v3 + 58;
      v4 = (unsigned __int16 *)((char *)&FontAssocDefaultTable + v3);
      if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                           (PUBLIC_PFTOBJ *)&v14,
                           (unsigned __int16 *)((char *)&FontAssocDefaultTable + v3 + 124),
                           &v12,
                           0xAu,
                           &v13,
                           (struct _EUDCLOAD *)v11,
                           0) )
      {
        if ( (_QWORD)v10 )
        {
          v6 = (__int64 *)&v10;
          v7 = 2LL;
          do
          {
            v8 = *v6++;
            *(_DWORD *)(v8 + 12) |= 0x200u;
            --v7;
          }
          while ( v7 );
          v1 = 1;
          *(_OWORD *)(v0 + 524) = v10;
        }
        else
        {
          PFTOBJ::bUnloadEUDCFont(v5, v4 + 62);
          *(_WORD *)v0 = 0;
        }
      }
      else
      {
        *(_WORD *)v0 = 0;
        *(_OWORD *)(v0 + 524) = 0LL;
      }
    }
    v0 += 664;
  }
  return v1;
}
