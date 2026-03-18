/*
 * XREFs of PnpCmResourcesToBiosResources @ 0x1C00B3A40
 * Callers:
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0022ECC (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     PnpiCmResourceToBiosAddress @ 0x1C00B4118 (PnpiCmResourceToBiosAddress.c)
 *     PnpiCmResourceToBiosAddressDouble @ 0x1C00B4204 (PnpiCmResourceToBiosAddressDouble.c)
 *     PnpiCmResourceToBiosAddressQuad @ 0x1C00B42E8 (PnpiCmResourceToBiosAddressQuad.c)
 *     PnpiCmResourceToBiosDma @ 0x1C00B43B0 (PnpiCmResourceToBiosDma.c)
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1C00B4430 (PnpiCmResourceToBiosExtendedIrq.c)
 *     PnpiCmResourceToBiosGpioInterruptIoDescriptor @ 0x1C00B4524 (PnpiCmResourceToBiosGpioInterruptIoDescriptor.c)
 *     PnpiCmResourceToBiosIoFixedPort @ 0x1C00B4580 (PnpiCmResourceToBiosIoFixedPort.c)
 *     PnpiCmResourceToBiosIoPort @ 0x1C00B45D0 (PnpiCmResourceToBiosIoPort.c)
 *     PnpiCmResourceToBiosIrq @ 0x1C00B4640 (PnpiCmResourceToBiosIrq.c)
 *     PnpiCmResourceToBiosMemory @ 0x1C00B46C0 (PnpiCmResourceToBiosMemory.c)
 *     PnpiCmResourceToBiosMemory32Fixed @ 0x1C00B472C (PnpiCmResourceToBiosMemory32Fixed.c)
 */

__int64 __fastcall PnpCmResourcesToBiosResources(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 v4; // bp
  __int64 v6; // rsi
  __int64 v8; // r10
  signed int v9; // ebx
  unsigned __int64 v10; // rdi
  unsigned __int8 *v11; // r13
  unsigned __int16 v12; // r12
  unsigned __int16 v13; // r9
  signed int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // r8d
  char v20; // cl
  unsigned int v21; // edx
  _BYTE *v22; // rax
  unsigned int v24; // edx
  unsigned int v25; // ecx
  _BYTE *v26; // r8
  __int64 v27; // [rsp+28h] [rbp-40h]
  __int64 v28; // [rsp+30h] [rbp-38h]

  v4 = *a3;
  v6 = a4;
  v8 = a1;
  v9 = 0;
  v10 = (unsigned __int64)a3;
  v11 = &a3[a4];
  while ( 1 )
  {
    if ( (v4 & 0x80u) == 0 )
    {
      v12 = (v4 & 7) + 1;
      v4 &= 0x78u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_9;
      v13 = 10;
      goto LABEL_8;
    }
    if ( v10 >= (unsigned __int64)(v11 - 2) )
      goto LABEL_77;
    v12 = *(_WORD *)(v10 + 1) + 3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 11;
LABEL_8:
      LODWORD(v28) = v12;
      LODWORD(v27) = v4;
      WPP_RECORDER_SF_LL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xEu,
        v13,
        (__int64)&WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids,
        v27,
        v28);
      v8 = a1;
    }
LABEL_9:
    if ( v4 == 120 )
      break;
    if ( v4 > 0x85u )
    {
      switch ( v4 )
      {
        case 0x86u:
          if ( (unsigned __int64)&a3[v6 - v10] < 0xC )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosMemory32Fixed(v10, a2, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_68;
        case 0x87u:
          if ( (unsigned __int64)&a3[v6 - v10] < 0x1A )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosAddressDouble(v10, a2, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_68;
        case 0x88u:
          if ( (unsigned __int64)&a3[v6 - v10] < 0x10 )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosAddress(v10, a2, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_68;
        case 0x89u:
          if ( (unsigned __int64)&a3[v6 - v10] < 9 )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosExtendedIrq(v8, v10, a2, 1LL);
          goto LABEL_68;
        case 0x8Au:
          if ( (unsigned __int64)&a3[v6 - v10] < 0x2E )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosAddressQuad(v10, a2, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_68;
        case 0x8Cu:
          if ( (unsigned __int64)&a3[v6 - v10] < 0x17 )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosGpioInterruptIoDescriptor(v10, a2, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_68;
        case 0x8Du:
          return (unsigned int)((unsigned __int64)&a3[v6 - v10] < 0x12 ? -1072431089 : -1073741822);
      }
      if ( v4 != 142 )
        goto LABEL_46;
      if ( (unsigned __int64)&a3[v6 - v10] < 0xC )
        return (unsigned int)-1072431089;
      v19 = *(_DWORD *)(a2 + 16);
      v20 = 0;
      v21 = 0;
      if ( v19 )
      {
        v22 = (_BYTE *)(a2 + 20);
        while ( *v22 != 0x84 )
        {
          ++v21;
          v22 += 20;
          if ( v21 >= v19 )
            goto LABEL_55;
        }
        v20 = 1;
        *v22 = 0;
      }
LABEL_55:
      v9 = v20 == 0 ? 0xC0000001 : 0;
    }
    else
    {
      switch ( v4 )
      {
        case 0x85u:
          if ( (unsigned __int64)&a3[v6 - v10] < 0x14 )
            return (unsigned int)-1072431089;
          *(_DWORD *)(v10 + 4) = 0;
          v15 = 0;
          *(_DWORD *)(v10 + 8) = 0;
          *(_DWORD *)(v10 + 12) = 0;
          *(_DWORD *)(v10 + 16) = 0;
          *(_BYTE *)(v10 + 3) = 0;
          v16 = *(_DWORD *)(a2 + 16);
          if ( v16 )
          {
            v17 = a2 + 20;
            while ( *(_BYTE *)v17 != 3 )
            {
              ++v15;
              v17 += 20LL;
              if ( v15 >= v16 )
                goto LABEL_37;
            }
            *(_DWORD *)(v10 + 16) = *(_DWORD *)(v17 + 12);
            v18 = *(_DWORD *)(v17 + 4);
            *(_DWORD *)(v10 + 8) = v18;
            *(_DWORD *)(v10 + 4) = v18;
            *(_BYTE *)(v10 + 3) = (*(_BYTE *)(v17 + 2) & 1) == 0;
            *(_BYTE *)v17 = 0;
          }
LABEL_37:
          v9 = 0;
          goto LABEL_70;
        case 0x20u:
          if ( (unsigned __int64)&a3[v6 - v10] < 4 )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosIrq(v10, a2, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_68;
        case 0x28u:
          if ( (unsigned __int64)&a3[v6 - v10] < 3 )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosDma(v10, a2, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_68;
      }
      if ( v4 != 48 && v4 != 56 )
      {
        switch ( v4 )
        {
          case 0x40u:
            if ( (unsigned __int64)&a3[v6 - v10] < 8 )
              return (unsigned int)-1072431089;
            v14 = PnpiCmResourceToBiosIoPort(v10, a2, &WPP_RECORDER_INITIALIZED, 1LL);
            goto LABEL_68;
          case 0x48u:
            if ( (unsigned __int64)&a3[v6 - v10] < 4 )
              return (unsigned int)-1072431089;
            v14 = PnpiCmResourceToBiosIoFixedPort(v10, a2, &WPP_RECORDER_INITIALIZED, 1LL);
            goto LABEL_68;
          case 0x70u:
            goto LABEL_69;
          case 0x81u:
            if ( (unsigned __int64)&a3[v6 - v10] < 0xC )
              return (unsigned int)-1072431089;
            v14 = PnpiCmResourceToBiosMemory(v10, a2, &WPP_RECORDER_INITIALIZED, 1LL);
LABEL_68:
            v9 = v14;
            goto LABEL_69;
        }
LABEL_46:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v27) = v4;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xEu,
            0xDu,
            (__int64)&WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids,
            v27);
        }
      }
    }
LABEL_69:
    if ( v9 < 0 )
      return (unsigned int)v9;
LABEL_70:
    v10 += v12;
    if ( v10 >= (unsigned __int64)v11 )
      goto LABEL_77;
    v4 = *(_BYTE *)v10;
    v8 = a1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xEu,
      0xCu,
      (__int64)&WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids);
LABEL_77:
  v24 = *(_DWORD *)(a2 + 16);
  v25 = 0;
  if ( v24 )
  {
    v26 = (_BYTE *)(a2 + 20);
    while ( *v26 )
    {
      ++v25;
      v26 += 20;
      if ( v25 >= v24 )
        goto LABEL_81;
    }
    return 0LL;
  }
  else
  {
LABEL_81:
    if ( v25 != v24 )
      return 0LL;
    return 3221225473LL;
  }
}
