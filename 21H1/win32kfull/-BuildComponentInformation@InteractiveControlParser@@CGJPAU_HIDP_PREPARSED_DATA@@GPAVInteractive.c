/*
 * XREFs of ?BuildComponentInformation@InteractiveControlParser@@CGJPAU_HIDP_PREPARSED_DATA@@GPAVInteractiveControlDevice@@@Z @ 0x1B5646
 * Callers:
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAVInteractiveControlDevice@@@Z @ 0x1B5930 (-BuildDeviceCapabilities@InteractiveControlParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAVInteractiveCon.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z @ 0x1B4DDC (-SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z.c)
 *     ?CreateAndLinkComponent@InteractiveControlParser@@CGJPAU_HIDP_VALUE_CAPS@@HPAU_INTERACTIVECTRL_CAPABILITIES@@PAPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x1B5AB3 (-CreateAndLinkComponent@InteractiveControlParser@@CGJPAU_HIDP_VALUE_CAPS@@HPAU_INTERACTIVECTRL_C.c)
 *     ?FreeComponentInformation@InteractiveControlParser@@CGXPAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1B5D65 (-FreeComponentInformation@InteractiveControlParser@@CGXPAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 */

NTSTATUS __userpurge InteractiveControlParser::BuildComponentInformation@<eax>(
        struct _HIDP_PREPARSED_DATA *a1@<ecx>,
        struct _HIDP_PREPARSED_DATA *a2,
        unsigned __int16 a3,
        struct InteractiveControlDevice *a4)
{
  int v4; // edi
  struct _HIDP_BUTTON_CAPS *v6; // ebx
  NTSTATUS SpecificValueCaps; // eax
  NTSTATUS v8; // esi
  struct _HIDP_VALUE_CAPS *v9; // esi
  UCHAR *v10; // eax
  SimpleHapticsController *v11; // ecx
  NTSTATUS v12; // eax
  UCHAR *v13; // eax
  bool i; // cf
  NTSTATUS SpecificButtonCaps; // eax
  struct _INTERACTIVECTRL_CAPABILITIES *v17; // [esp+0h] [ebp-84h]
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY **v18; // [esp+4h] [ebp-80h]
  USHORT v19[2]; // [esp+Ch] [ebp-78h] BYREF
  unsigned int v20; // [esp+10h] [ebp-74h] BYREF
  int v21; // [esp+14h] [ebp-70h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [esp+18h] [ebp-6Ch]
  UCHAR *v23; // [esp+1Ch] [ebp-68h]
  struct _HIDP_VALUE_CAPS *v24; // [esp+20h] [ebp-64h]
  USHORT ButtonCapsLength[2]; // [esp+24h] [ebp-60h] BYREF
  USHORT ValueCapsLength[2]; // [esp+28h] [ebp-5Ch] BYREF
  struct _HIDP_PREPARSED_DATA *v27; // [esp+2Ch] [ebp-58h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [esp+30h] [ebp-54h] BYREF

  v4 = 0;
  v27 = a2;
  v24 = 0;
  *(_DWORD *)ValueCapsLength = 0;
  PreparsedData = a1;
  v6 = 0;
  *(_DWORD *)ButtonCapsLength = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  *(_DWORD *)v19 = 1;
  v21 = 0;
  *((_DWORD *)a2 + 38) = (char *)a2 + 148;
  *((_DWORD *)a2 + 37) = (char *)a2 + 148;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, 0, 0, 0, ValueCapsLength, a1);
  v8 = SpecificValueCaps;
  if ( !SpecificValueCaps || SpecificValueCaps == -1072627705 )
  {
    if ( ValueCapsLength[0] )
    {
      v9 = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72 * ValueCapsLength[0], 1819440195);
      v24 = v9;
      if ( !v9 )
      {
        v8 = -1073741670;
LABEL_34:
        InteractiveControlParser::FreeComponentInformation(v17);
        return v8;
      }
      if ( HidP_GetSpecificValueCaps(HidP_Input, 0, 0, 0, v9, ValueCapsLength, PreparsedData) >= 0 )
      {
        if ( HidP_GetSpecificValueCaps(HidP_Feature, 1u, 0, 0x48u, &ValueCaps, v19, PreparsedData) >= 0 )
        {
          v10 = (UCHAR *)Win32AllocPool(*((unsigned __int16 *)v27 + 26), 1819440195);
          v23 = v10;
          *v10 = ValueCaps.ReportID;
          v11 = (SimpleHapticsController *)*((_DWORD *)v27 + 76);
          if ( v11 )
          {
            v12 = SimpleHapticsController::SendDeviceIOControl(
                    v11,
                    (_BYTE *)&loc_B0191 + 1,
                    0,
                    0,
                    v10,
                    *((unsigned __int16 *)v27 + 26),
                    &v20);
            v9 = v24;
            if ( v12 >= 0 )
            {
              _DbgPrintEx(
                0x4Du,
                2u,
                "InteractiveControlParser::BuildComponentInformationFound Device Resolution Multiplier:\n");
              _DbgPrintEx(
                0x4Du,
                2u,
                "InteractiveControlParser::BuildComponentInformation\tLogical Rnage = [%d - %d]\n",
                ValueCaps.LogicalMin,
                ValueCaps.LogicalMax);
              _DbgPrintEx(0x4Du, 2u, "InteractiveControlParser::BuildComponentInformation\tMultiplier Value = %d\n", 1);
              v9 = v24;
            }
            v10 = v23;
          }
          Win32FreePool(v10);
        }
        v13 = 0;
        for ( i = ValueCapsLength[0] != 0; ; i = (unsigned __int16)((_WORD)v23 + 1) < ValueCapsLength[0] )
        {
          v23 = v13;
          if ( !i )
            break;
          v20 = (unsigned int)&v9[(unsigned __int16)v13];
          v8 = InteractiveControlParser::CreateAndLinkComponent(
                 (struct _HIDP_VALUE_CAPS *)((char *)v27 + 40),
                 (int)&v21,
                 v17,
                 v18);
          if ( v8 < 0 )
            goto LABEL_29;
          if ( v21 && *(_WORD *)(v20 + 6) == ValueCaps.LinkCollection )
            *(_DWORD *)(v21 + 116) = 1;
          v9 = v24;
          v13 = v23 + 1;
        }
      }
    }
    SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0, 0, 0, 0, ButtonCapsLength, PreparsedData);
    v8 = SpecificButtonCaps;
    if ( (!SpecificButtonCaps || SpecificButtonCaps == -1072627705) && ButtonCapsLength[0] )
    {
      v6 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPool(72 * ButtonCapsLength[0], 1819440195);
      if ( v6 )
      {
        v8 = HidP_GetSpecificButtonCaps(HidP_Input, 0, 0, 0, v6, ButtonCapsLength, PreparsedData);
        if ( v8 >= 0 && ButtonCapsLength[0] )
        {
          do
          {
            v8 = InteractiveControlParser::CreateAndLinkComponent(
                   (struct _HIDP_VALUE_CAPS *)((char *)v27 + 40),
                   (int)&v21,
                   v17,
                   v18);
            if ( v8 < 0 )
              break;
            ++v4;
          }
          while ( (unsigned __int16)v4 < ButtonCapsLength[0] );
        }
      }
      else
      {
        v8 = -1073741670;
      }
    }
LABEL_29:
    if ( v24 )
      Win32FreePool(v24);
    if ( v6 )
      Win32FreePool(v6);
  }
  if ( v8 < 0 )
    goto LABEL_34;
  return v8;
}
