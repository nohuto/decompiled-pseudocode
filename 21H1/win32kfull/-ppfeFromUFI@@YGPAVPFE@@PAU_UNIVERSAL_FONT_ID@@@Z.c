/*
 * XREFs of ?ppfeFromUFI@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@@Z @ 0x207C74
 * Callers:
 *     ?vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x2087AC (-vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z @ 0x89BDC (-pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?SameProccess@PFEOBJ@@QAEHXZ @ 0x1D7BCF (-SameProccess@PFEOBJ@@QAEHXZ.c)
 */

struct PFE *__thiscall ppfeFromUFI(struct _UNIVERSAL_FONT_ID *this)
{
  int v1; // ebx
  struct _HASHBUCKET *v2; // eax
  _DWORD *v3; // edi
  struct _UNIVERSAL_FONT_ID *v4; // ecx
  int v5; // esi
  struct _FONTHASH **v7; // [esp+4h] [ebp-Ch] BYREF
  struct _FONTHASH *v8; // [esp+8h] [ebp-8h] BYREF
  struct _UNIVERSAL_FONT_ID *v9; // [esp+Ch] [ebp-4h]

  v1 = 0;
  v9 = this;
  v7 = gpPFTPublic + 2;
  v8 = gpPFTPublic[2];
  v2 = FHOBJ::pbktSearch((FHOBJ *)&v7, 0, 0, this, 0);
  if ( v2 )
  {
    v3 = (_DWORD *)*((_DWORD *)v2 + 1);
    if ( v3 )
    {
      v4 = v9;
      do
      {
        v5 = v3[1];
        v8 = (struct _FONTHASH *)v5;
        if ( *(_DWORD *)(v5 + 52) == *(_DWORD *)v4 && *(_DWORD *)(v5 + 56) == *((_DWORD *)v4 + 1) )
        {
          if ( PFEOBJ::SameProccess((PFEOBJ *)&v8) && (*(_BYTE *)(v5 + 8) & 2) == 0 )
            return (struct PFE *)v3[1];
          v4 = v9;
        }
        v3 = (_DWORD *)*v3;
      }
      while ( v3 );
    }
  }
  return (struct PFE *)v1;
}
