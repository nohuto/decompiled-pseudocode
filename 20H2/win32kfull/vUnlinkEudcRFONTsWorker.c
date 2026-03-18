/*
 * XREFs of vUnlinkEudcRFONTsWorker @ 0x1C02980DC
 * Callers:
 *     vUnlinkEudcRFONTs @ 0x1C0297D74 (vUnlinkEudcRFONTs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 *     vMakeInactiveHelper @ 0x1C0297D2C (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkEudcRFONTsWorker(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 i; // rsi
  struct RFONT **v6; // rcx
  __int64 v7; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = a2;
    do
    {
      if ( (*(_DWORD *)(v2 + 52) & 8) == 0 )
      {
        v4 = *(_QWORD *)(v2 + 72);
        if ( v4 )
        {
          v8 = 0LL;
          do
          {
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 840); i = (unsigned int)(i + 1) )
            {
              v6 = (struct RFONT **)(*(_QWORD *)(v4 + 744) + 8 * i);
              if ( *v6 )
              {
                v7 = *((_QWORD *)*v6 + 15);
                if ( v7 == *a1 || v7 == a1[1] )
                  vMakeInactiveHelper(v6);
              }
            }
            *(_DWORD *)(v4 + 712) = 0;
            v4 = *(_QWORD *)(v4 + 496);
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
          }
          while ( v4 );
        }
      }
      v2 = *(_QWORD *)(v2 + 8);
    }
    while ( v2 );
  }
}
