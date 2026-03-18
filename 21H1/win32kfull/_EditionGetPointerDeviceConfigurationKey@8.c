/*
 * XREFs of _EditionGetPointerDeviceConfigurationKey@8 @ 0xF36AC
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z @ 0x9CFD8 (-OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z.c)
 */

int __thiscall EditionGetPointerDeviceConfigurationKey(void **this, int a2, void *a3)
{
  unsigned int v3; // ecx
  int v5; // [esp-4h] [ebp-8h]
  unsigned __int16 v6[2]; // [esp+0h] [ebp-4h] BYREF
  int savedregs; // [esp+4h] [ebp+0h]

  *(_DWORD *)v6 = 0;
  v3 = 0;
  switch ( a2 )
  {
    case 0:
      v5 = 122;
      goto LABEL_8;
    case 1:
      v3 = 136;
      break;
    case 2:
      v5 = 62;
      goto LABEL_8;
    case 3:
      v5 = 72;
      goto LABEL_8;
    case 4:
    case 7:
      v5 = 96;
      goto LABEL_8;
    case 5:
    case 6:
      v5 = 76;
LABEL_8:
      v3 = v5;
      break;
    default:
      break;
  }
  OpenDeviceCfgKey(v3, (ACCESS_MASK)a3, v6, a3 == &loc_20006, *(void ***)v6, savedregs);
  return *(_DWORD *)v6;
}
