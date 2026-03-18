/*
 * XREFs of _NtGdiCheckBitmapBits@32 @ 0x21BE51
 * Callers:
 *     <none>
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?GreCheckBitmapBits@@YGHPAUHDC__@@PAXPAU_DEVBITMAPINFO@@1PAE@Z @ 0x21B680 (-GreCheckBitmapBits@@YGHPAUHDC__@@PAXPAU_DEVBITMAPINFO@@1PAE@Z.c)
 */

int __stdcall NtGdiCheckBitmapBits(HDC a1, int a2, char *Address, int a4, SIZE_T Size, int a6, int a7, char *a8)
{
  int v8; // edi
  unsigned int v9; // esi
  SIZE_T v10; // ecx
  ULONG *v12; // [esp+0h] [ebp-50h]
  unsigned int v13; // [esp+0h] [ebp-50h]
  void *v14; // [esp+0h] [ebp-50h]
  unsigned int *v15; // [esp+4h] [ebp-4Ch]
  unsigned __int8 *v16; // [esp+4h] [ebp-4Ch]
  struct HDC__ v17; // [esp+10h] [ebp-40h] BYREF
  SIZE_T v18; // [esp+14h] [ebp-3Ch]
  int v19; // [esp+18h] [ebp-38h]
  unsigned int v20; // [esp+1Ch] [ebp-34h]
  int v21; // [esp+20h] [ebp-30h]
  int v22; // [esp+24h] [ebp-2Ch]
  unsigned int v23; // [esp+28h] [ebp-28h] BYREF
  SIZE_T v24; // [esp+2Ch] [ebp-24h]
  HANDLE v25; // [esp+30h] [ebp-20h]
  HANDLE SecureHandle; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  v24 = 0;
  v23 = 0;
  SecureHandle = 0;
  v25 = 0;
  v8 = 1;
  if ( a4 != 2 || a6 != 1 )
    goto LABEL_25;
  if ( ULongLongToULong(3LL * Size, v12) < 0 || (v9 = v24, (ULongAdd(3, v24, (int *)&v23, v13, v15) & 0x80000000) != 0) )
  {
    EngSetLastError(0x216u);
    return 0;
  }
  v10 = (v9 + 3) & 0xFFFFFFFC;
  v24 = v10;
  if ( a7 != v10 )
  {
LABEL_25:
    EngSetLastError(0x57u);
    return 0;
  }
  v17.unused = 5;
  v18 = Size;
  v19 = 1;
  v20 = (v9 + 3) & 0xFFFFFFFC;
  v21 = 0;
  v22 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( v10 )
  {
    if ( ((unsigned __int8)Address & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned int)&Address[v10] > _MmUserProbeAddress || &Address[v10] < Address )
      *(_BYTE *)_MmUserProbeAddress = 0;
  }
  if ( Size && ((unsigned int)&a8[Size] > _MmUserProbeAddress || &a8[Size] < a8) )
    *(_BYTE *)_MmUserProbeAddress = 0;
  SecureHandle = MmSecureVirtualMemory(Address, v10, 2u);
  v25 = MmSecureVirtualMemory(a8, Size, 4u);
  ms_exc.registration.TryLevel = -2;
  if ( SecureHandle )
  {
    if ( v25 )
      v8 = GreCheckBitmapBits(a2, a1, (struct _DEVBITMAPINFO *)&v17, Address, (struct _DEVBITMAPINFO *)a8, v14, v16);
    if ( SecureHandle )
      MmUnsecureVirtualMemory(SecureHandle);
  }
  if ( v25 )
    MmUnsecureVirtualMemory(v25);
  return v8;
}
