/*
 * XREFs of ?RemoveMessageFromFilter@@YGHPAPAPAXIPAH@Z @ 0xE6A5C
 * Callers:
 *     __ChangeWindowMessageFilter@8 @ 0x7FB78 (__ChangeWindowMessageFilter@8.c)
 *     __ChangeWindowMessageFilterEx@16 @ 0x7FD26 (__ChangeWindowMessageFilterEx@16.c)
 * Callees:
 *     ?IsMessageAllowedByFilterEx@@YGHPBQAXIPAPAPAX1@Z @ 0x9C710 (-IsMessageAllowedByFilterEx@@YGHPBQAXIPAPAPAX1@Z.c)
 *     ?IsMsgLookupTableEntryEmpty@@YGHPBQAXK@Z @ 0xD3000 (-IsMsgLookupTableEntryEmpty@@YGHPBQAXK@Z.c)
 */

int __userpurge RemoveMessageFromFilter@<eax>(
        unsigned int a1@<edx>,
        int *a2@<ecx>,
        void ***a3,
        unsigned int a4,
        int *a5)
{
  int v7; // esi
  int v8; // edx
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  void *v14; // ecx
  int v15; // ecx
  void ***v16; // [esp+0h] [ebp-18h]
  void ***v17; // [esp+4h] [ebp-14h]
  void *v18; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v19; // [esp+10h] [ebp-8h] BYREF
  int v20; // [esp+14h] [ebp-4h]

  v18 = 0;
  v19 = 0;
  v7 = *a2;
  v8 = IsMessageAllowedByFilterEx(a1, *a2, &v18, &v19, v16, v17);
  v20 = v8;
  if ( v8 )
  {
    v10 = (a1 >> 3) & 0x3F;
    v11 = *(unsigned __int8 *)(v10 + v19) & ~(1 << (a1 & 7));
    v12 = v19;
    *(_BYTE *)(v10 + v19) = v11;
    if ( !(_BYTE)v11 )
    {
      if ( IsMsgLookupTableEntryEmpty(v12, 0x10u) )
      {
        Win32FreePool(v13);
        v14 = v18;
        *((_DWORD *)v18 + ((a1 >> 9) & 0xF)) = 0;
        if ( IsMsgLookupTableEntryEmpty((int)v14, 0x10u) )
        {
          Win32FreePool(v15);
          *(_DWORD *)(v7 + 4 * (a1 >> 13)) = 0;
          if ( IsMsgLookupTableEntryEmpty(v7, 8u) )
          {
            Win32FreePool(v7);
            v7 = 0;
          }
        }
      }
    }
    v8 = v20;
  }
  if ( a3 )
    *a3 = (void **)(v8 == 0);
  if ( v7 != *a2 )
    *a2 = v7;
  return 1;
}
