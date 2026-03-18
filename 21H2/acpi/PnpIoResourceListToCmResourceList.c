/*
 * XREFs of PnpIoResourceListToCmResourceList @ 0x1C0098DB4
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C00978C0 (ACPIBusIrpQueryResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B09D0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B5F70 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpIoResourceListToCmResourceList(_DWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rbx
  int v5; // eax
  _DWORD *Pool2; // rax
  unsigned int v7; // r11d
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // ecx

  *a2 = 0LL;
  if ( !a1 )
    return 3221225488LL;
  v4 = a1 + 8;
  if ( a1 == (_DWORD *)-32LL )
    return 3221225488LL;
  v5 = a1[9];
  if ( !v5 )
    return 3221225488LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(20 * (v5 + 1)), 1383097153LL);
  if ( !Pool2 )
    return 3221225626LL;
  v7 = 0;
  *Pool2 = 1;
  Pool2[1] = a1[1];
  Pool2[2] = a1[2];
  Pool2[3] = 65537;
  for ( Pool2[4] = v4[1]; v7 < v4[1]; ++v7 )
  {
    v8 = 5LL * v7;
    v9 = 8LL * v7;
    v10 = BYTE1(v4[v9 + 2]);
    LOBYTE(Pool2[v8 + 5]) = v10;
    BYTE1(Pool2[v8 + 5]) = BYTE2(v4[v9 + 2]);
    HIWORD(Pool2[v8 + 5]) = v4[v9 + 3];
    switch ( v10 )
    {
      case 1:
        goto LABEL_9;
      case 2:
        LOWORD(Pool2[5 * v7 + 6]) = v4[v9 + 4];
        Pool2[5 * v7 + 7] = v4[v9 + 4];
        *(_QWORD *)&Pool2[5 * v7 + 8] = 0xFFFFFFFFLL;
        HIWORD(Pool2[5 * v7 + 6]) = 0;
        continue;
      case 3:
        goto LABEL_9;
      case 4:
        if ( SLOBYTE(v4[v9 + 3]) >= 0 )
        {
          *(_QWORD *)&Pool2[5 * v7 + 6] = (unsigned int)v4[v9 + 4];
        }
        else
        {
          Pool2[5 * v7 + 6] = v4[v9 + 6];
          Pool2[5 * v7 + 7] = v4[v9 + 4];
          LOBYTE(Pool2[5 * v7 + 8]) = v4[v9 + 7];
        }
        continue;
      case 6:
        Pool2[5 * v7 + 6] = v4[v9 + 5];
        Pool2[5 * v7 + 7] = v4[v9 + 4];
        continue;
      case 7:
LABEL_9:
        Pool2[5 * v7 + 8] = v4[v9 + 4];
        *(_QWORD *)&Pool2[5 * v7 + 6] = *(_QWORD *)&v4[v9 + 6];
        break;
      default:
        Pool2[5 * v7 + 6] = v4[v9 + 4];
        Pool2[5 * v7 + 7] = v4[v9 + 5];
        Pool2[5 * v7 + 8] = v4[v9 + 6];
        break;
    }
  }
  *a2 = Pool2;
  return 0LL;
}
