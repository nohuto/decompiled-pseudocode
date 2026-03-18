/*
 * XREFs of ?ppfeGetPFEFromUFIInternal@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1D8628
 * Callers:
 *     ?GreGetBaseUFIBits@@YGHPAU_UNIVERSAL_FONT_ID@@PAU_FONTFILEVIEW@@@Z @ 0x1D785A (-GreGetBaseUFIBits@@YGHPAU_UNIVERSAL_FONT_ID@@PAU_FONTFILEVIEW@@@Z.c)
 *     ?ppfeGetPFEFromUFI@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1D85FC (-ppfeGetPFEFromUFI@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z @ 0x1F4BAA (-bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z @ 0x89BDC (-pbktSearch@FHOBJ@@QAEPAU_HASHBUCKET@@PBGPAIPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?SameProccess@PFEOBJ@@QAEHXZ @ 0x1D7BCF (-SameProccess@PFEOBJ@@QAEHXZ.c)
 */

struct PFE *__userpurge ppfeGetPFEFromUFIInternal@<eax>(
        int a1@<edx>,
        struct _UNIVERSAL_FONT_ID *a2@<ecx>,
        struct _UNIVERSAL_FONT_ID *a3,
        int a4,
        int a5)
{
  int v5; // edi
  int v6; // esi
  struct _FONTHASH **v7; // eax
  struct _HASHBUCKET *v8; // eax
  _DWORD *i; // ebx
  int v10; // esi
  int v11; // eax
  struct _FONTHASH **v13; // [esp+8h] [ebp-14h] BYREF
  struct _FONTHASH *v14; // [esp+Ch] [ebp-10h] BYREF
  struct _UNIVERSAL_FONT_ID *v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  v16 = -1;
  v5 = 0;
  v15 = a2;
  v6 = 0;
  v17 = 0;
  if ( a1 )
    v7 = (struct _FONTHASH **)gpPFTPrivate;
  else
    v7 = gpPFTPublic;
  if ( v7 )
  {
    v13 = v7 + 2;
    v14 = v7[2];
    v8 = FHOBJ::pbktSearch((FHOBJ *)&v13, 0, 0, a2, 0);
    if ( v8 )
    {
      for ( i = (_DWORD *)*((_DWORD *)v8 + 1); i; i = (_DWORD *)*i )
      {
        v10 = i[1];
        v14 = (struct _FONTHASH *)v10;
        if ( *(_DWORD *)(v10 + 52) != *(_DWORD *)v15
          || *(_DWORD *)(v10 + 56) != *((_DWORD *)v15 + 1)
          || a3 && !PFEOBJ::SameProccess((PFEOBJ *)&v14)
          || (*(_BYTE *)(v10 + 8) & 2) != 0 )
        {
          goto LABEL_20;
        }
        v11 = !*(_DWORD *)(v10 + 64) || *(PKTHREAD *)(v10 + 64) == KeGetCurrentThread() ? 2 : 0;
        if ( (*(_BYTE *)(v10 + 8) & 8) == 0 )
          ++v11;
        if ( v11 > v16 )
        {
          v6 = i[1];
          v17 = v6;
          v16 = v11;
        }
        else
        {
LABEL_20:
          v6 = v17;
        }
      }
      return (struct PFE *)v6;
    }
  }
  return (struct PFE *)v5;
}
