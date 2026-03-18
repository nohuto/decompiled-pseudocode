/*
 * XREFs of vUnlinkEudcRFONTsWorker @ 0x1F9371
 * Callers:
 *     vUnlinkEudcRFONTs @ 0x1F90F9 (vUnlinkEudcRFONTs.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     vMakeInactiveHelper @ 0x1F90C7 (vMakeInactiveHelper.c)
 */

int __usercall vUnlinkEudcRFONTsWorker@<eax>(int result@<eax>, int a2@<edx>, _DWORD *a3@<ecx>)
{
  _DWORD *v4; // edx
  _DWORD *v5; // esi
  unsigned int i; // ebx
  struct RFONT **v7; // ecx
  int v8; // eax
  int v9; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v10; // [esp+14h] [ebp-4h]

  v4 = a3;
  v10 = a3;
  while ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 32) & 8) == 0 )
    {
      v5 = *(_DWORD **)(a2 + 52);
      if ( v5 )
      {
        v9 = 0;
        do
        {
          for ( i = 0; i < v5[195]; ++i )
          {
            v7 = (struct RFONT **)(v5[182] + 4 * i);
            if ( *v7 )
            {
              v8 = *((_DWORD *)*v7 + 20);
              if ( v8 == *v4 || v8 == v4[1] )
              {
                vMakeInactiveHelper(v7);
                v4 = v10;
              }
            }
          }
          v5[177] = 0;
          v5 = (_DWORD *)v5[136];
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
          v4 = v10;
        }
        while ( v5 );
      }
    }
    a2 = *(_DWORD *)(a2 + 4);
  }
  return result;
}
