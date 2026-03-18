/*
 * XREFs of _DwmAsyncMagnSetWindowFilterList@16 @ 0x1D211E
 * Callers:
 *     _MagpComposeDesktop@8 @ 0xE1152 (_MagpComposeDesktop@8.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall DwmAsyncMagnSetWindowFilterList(PVOID Object, int a2, int a3, int *a4)
{
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  int *v10; // esi
  int v11; // eax
  _BYTE v14[252]; // [esp+14h] [ebp-100h] BYREF

  v5 = -1073741823;
  if ( Object )
  {
    memset(v14, 0, sizeof(v14));
    v6 = *a4;
    *(_WORD *)&v14[4] = 0x8000;
    *(_QWORD *)&v14[32] = a2;
    *(_DWORD *)&v14[248] = a3;
    v7 = a4[1];
    *(_DWORD *)v14 = 16515300;
    *(_DWORD *)&v14[24] = 1073741922;
    v8 = v7 + v6;
    *(_DWORD *)&v14[40] = v6;
    *(_DWORD *)&v14[44] = v7;
    if ( (unsigned int)(v7 + v6) >= 0x19 )
      v8 = 25;
    v9 = 0;
    if ( v8 )
    {
      v10 = (int *)a4[2];
      do
      {
        v11 = *v10++;
        *(_DWORD *)&v14[8 * v9 + 48] = v11;
        *(_DWORD *)&v14[8 * v9++ + 52] = v11 >> 31;
      }
      while ( v9 < v8 );
    }
    EtwUpdateEvent(0, 1073741922);
    v5 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v5;
}
