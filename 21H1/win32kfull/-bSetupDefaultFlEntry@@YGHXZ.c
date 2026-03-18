/*
 * XREFs of ?bSetupDefaultFlEntry@@YGHXZ @ 0x1F7794
 * Callers:
 *     _GreEnableEUDC@4 @ 0xEBCF6 (_GreEnableEUDC@4.c)
 * Callees:
 *     ?bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z @ 0xCD9B6 (-bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z @ 0xDD364 (-bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z.c)
 */

int __stdcall bSetupDefaultFlEntry()
{
  int v0; // ebx
  unsigned __int16 *v1; // esi
  int v2; // edi
  PFTOBJ *v3; // ecx
  _DWORD v5[2]; // [esp+Ch] [ebp-1Ch] BYREF
  int v6; // [esp+14h] [ebp-14h] BYREF
  int v7; // [esp+18h] [ebp-10h]
  struct _FONTHASH **v8; // [esp+1Ch] [ebp-Ch] BYREF
  unsigned int v9; // [esp+20h] [ebp-8h] BYREF
  struct PFF *v10; // [esp+24h] [ebp-4h] BYREF

  v0 = 0;
  v8 = gpPFTPublic;
  v1 = &word_26CBEC;
  v2 = 7;
  do
  {
    if ( *((_DWORD *)v1 - 31) && *v1 && !*((_DWORD *)v1 + 131) )
    {
      v5[1] = v1 - 33;
      v5[0] = &v6;
      v6 = 0;
      v7 = 0;
      v9 = 0;
      v10 = 0;
      if ( PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v8, v1, &v9, 0xAu, &v10, (struct _EUDCLOAD *)v5, 0) )
      {
        if ( v6 )
        {
          *(_DWORD *)(v6 + 8) |= 0x200u;
          v0 = 1;
          *(_DWORD *)(v7 + 8) |= 0x200u;
          *((_DWORD *)v1 + 131) = v6;
          *((_DWORD *)v1 + 132) = v7;
          goto LABEL_11;
        }
        PFTOBJ::bUnloadEUDCFont(v3, v1);
      }
      else
      {
        *((_DWORD *)v1 + 131) = 0;
        *((_DWORD *)v1 + 132) = 0;
      }
      *v1 = 0;
    }
LABEL_11:
    v1 += 328;
    --v2;
  }
  while ( v2 );
  return v0;
}
