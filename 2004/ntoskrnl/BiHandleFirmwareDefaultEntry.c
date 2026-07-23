/*
 * XREFs of BiHandleFirmwareDefaultEntry @ 0x14096F074
 * Callers:
 *     BiExportEfiBootManager @ 0x14096E6D8 (BiExportEfiBootManager.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     BiDeleteElement @ 0x140770DBC (BiDeleteElement.c)
 *     BiGetElement @ 0x14096C058 (BiGetElement.c)
 *     BiTranslateObjectIdentifier @ 0x14096F91C (BiTranslateObjectIdentifier.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiHandleFirmwareDefaultEntry(__int64 a1, void *a2, PVOID *a3, unsigned int *a4)
{
  int Element; // eax
  __int64 v9; // rbx
  unsigned int v10; // ecx
  char *v11; // rbp
  int v12; // r12d
  _DWORD *v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // rdi
  int v19; // [rsp+20h] [rbp-28h] BYREF
  int v20; // [rsp+24h] [rbp-24h] BYREF
  PVOID P[4]; // [rsp+28h] [rbp-20h] BYREF

  v19 = 0;
  v20 = 0;
  P[0] = 0LL;
  Element = BiGetElement(a2, 0x23000003u, P, &v20);
  LODWORD(v9) = Element;
  if ( Element == -1073741275 )
  {
LABEL_21:
    LODWORD(v9) = 0;
    goto LABEL_22;
  }
  if ( Element >= 0 )
  {
    BiDeleteElement(a2, 0x23000003u);
    v9 = 0LL;
    if ( (int)BiTranslateObjectIdentifier(a1, P[0], &v19) >= 0 )
    {
      v10 = *a4;
      v11 = (char *)*a3;
      v12 = v19;
      if ( !*a4 )
        goto LABEL_10;
      v13 = *a3;
      do
      {
        if ( *v13 == v19 )
          break;
        v9 = (unsigned int)(v9 + 1);
        ++v13;
      }
      while ( (unsigned int)v9 < v10 );
      if ( (_DWORD)v9 || !v10 )
      {
LABEL_10:
        v14 = v10 + 1;
        if ( (_DWORD)v9 != v10 )
          v14 = *a4;
        v15 = v14;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v14, 0x4B444342u);
        v17 = PoolWithTag;
        if ( !PoolWithTag )
        {
          LODWORD(v9) = -1073741670;
          goto LABEL_22;
        }
        *PoolWithTag = v12;
        if ( (_DWORD)v9 )
          memmove(PoolWithTag + 1, v11, 4LL * (unsigned int)v9);
        if ( (unsigned int)v9 < v15 - 1 )
          memmove(&v17[(unsigned int)v9 + 1], &v11[4 * v9 + 4], 4LL * (v15 - (unsigned int)v9 - 1));
        if ( *a3 )
          ExFreePoolWithTag(*a3, 0x4B444342u);
        *a3 = v17;
        *a4 = v15;
      }
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x4B444342u);
  return (unsigned int)v9;
}
