/*
 * XREFs of _EtwpAddReloggedHeaderExtensionEvents@12 @ 0x4B2EE302
 * Callers:
 *     _EtwpFinalizeLogFileHeader@8 @ 0x4B2EE176 (_EtwpFinalizeLogFileHeader@8.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

void __fastcall EtwpAddReloggedHeaderExtensionEvents(int a1, int a2, unsigned int a3)
{
  const void *v5; // ecx
  unsigned int v6; // ecx
  int v7; // edx
  unsigned int v8; // edi
  size_t v9; // [esp-4h] [ebp-18h]
  unsigned int v10; // [esp+Ch] [ebp-8h]
  unsigned int v11; // [esp+Ch] [ebp-8h]
  unsigned int v12; // [esp+10h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 360) )
  {
    v6 = *(_DWORD *)(a2 + 48);
    v12 = v6;
    v10 = (*(_DWORD *)(a1 + 364) + 7) & 0xFFFFFFF8;
    if ( v6 < a3 && v6 >= 0x178 && a3 - v6 >= ((*(_DWORD *)(a1 + 364) + 7) & 0xFFFFFFF8) )
    {
      LODWORD(v9) = *(_DWORD *)(a1 + 364);
      memcpy((void *)(v6 + a2), *(const void **)(a1 + 360), v9);
      *(_DWORD *)(a2 + 48) = v10 + v12;
    }
  }
  v5 = *(const void **)(a1 + 368);
  if ( v5 )
  {
    v7 = *(_DWORD *)(a1 + 372);
    v8 = *(_DWORD *)(a2 + 48);
    v11 = (v7 + 7) & 0xFFFFFFF8;
    if ( v8 < a3 && v8 >= 0x178 && a3 - v8 >= ((v7 + 7) & 0xFFFFFFF8) )
    {
      LODWORD(v9) = v7;
      memcpy((void *)(v8 + a2), v5, v9);
      *(_DWORD *)(a2 + 48) = v8 + v11;
    }
  }
}
