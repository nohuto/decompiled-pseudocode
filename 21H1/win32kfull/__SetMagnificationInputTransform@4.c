/*
 * XREFs of __SetMagnificationInputTransform@4 @ 0xCF572
 * Callers:
 *     _FreeDesktop@4 @ 0x821E8 (_FreeDesktop@4.c)
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 *     _MagpDecomposeDesktop@8 @ 0xCF50C (_MagpDecomposeDesktop@8.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 *     _MagpRevokeInputTransfrom@0 @ 0x13E0A7 (_MagpRevokeInputTransfrom@0.c)
 * Callees:
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?ComputeMagnificationFactor@@YGXPAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z @ 0x178D49 (-ComputeMagnificationFactor@@YGXPAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z.c)
 *     ?VerifyMagInputDimensions@@YGHPAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x178D98 (-VerifyMagInputDimensions@@YGHPAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     _AcquireMagInputLock@0 @ 0x178DBA (_AcquireMagInputLock@0.c)
 */

int __thiscall _SetMagnificationInputTransform(_DWORD *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v6; // eax
  bool v7; // zf
  _DWORD *v8; // esi
  void *v9; // eax
  struct _MAGN_INPUT_TRANSFORM *v10; // [esp+0h] [ebp-40h]
  struct _MAGNIFICATION_INPUT_TRANSFORM *v11; // [esp+0h] [ebp-40h]
  struct _MAGNIFICATION_INPUT_TRANSFORM *v12; // [esp+0h] [ebp-40h]
  _DWORD v13[11]; // [esp+Ch] [ebp-34h] BYREF
  int v14; // [esp+38h] [ebp-8h]
  _DWORD *v15; // [esp+3Ch] [ebp-4h]

  v15 = this;
  v2 = this[8];
  v3 = *(_DWORD *)(_gptiCurrent + 248);
  memset(&v13[4], 0, 28);
  v14 = _gptiCurrent;
  if ( v2 )
  {
    if ( v2 <= 0 )
      goto LABEL_7;
    if ( v2 > 2 )
    {
      if ( v2 == 3 )
      {
        v4 = *(_DWORD *)(v3 + 128);
        if ( !v4 )
          return 0;
        if ( _gptiCurrent == *(_DWORD *)(v4 + 32) || _gptiCurrent == _gptiRit )
        {
          AcquireMagInputLock();
          Win32FreePool(*(_DWORD *)(v3 + 128));
          *(_DWORD *)(v3 + 128) = 0;
          _InterlockedExchange(&gpMagInputLock, 0);
          _PostMessage(-1, 805, 0, 0);
          return 1;
        }
LABEL_21:
        UserSetLastError((struct _NT_TIB *)5);
        return 0;
      }
LABEL_7:
      UserSetLastError((struct _NT_TIB *)0x57);
      return 0;
    }
    v6 = *(_DWORD *)(v3 + 128);
    if ( !v6 )
      goto LABEL_7;
    if ( _gptiCurrent != *(_DWORD *)(v6 + 32) )
      goto LABEL_21;
    if ( !VerifyMagInputDimensions(v10) )
      return 0;
    qmemcpy(v13, *(const void **)(v3 + 128), sizeof(v13));
    v7 = v15[8] == 1;
    v13[0] = *v15;
    v13[1] = v15[1];
    v13[2] = v15[2];
    v13[3] = v15[3];
    if ( v7 )
    {
      v13[4] = v15[4];
      v13[5] = v15[5];
      v13[6] = v15[6];
      v13[7] = v15[7];
    }
    ComputeMagnificationFactor(v11);
    AcquireMagInputLock();
    qmemcpy(*(void **)(v3 + 128), v13, 0x2Cu);
    _InterlockedExchange(&gpMagInputLock, 0);
  }
  else
  {
    if ( *(_DWORD *)(v3 + 128) )
      goto LABEL_21;
    if ( !VerifyMagInputDimensions(v10) )
      return 0;
    v13[0] = *this;
    v8 = this + 1;
    v13[1] = *v8++;
    v13[2] = *v8;
    v13[3] = v8[1];
    v13[4] = v15[4];
    v13[5] = v15[5];
    v13[6] = v15[6];
    v13[7] = v15[7];
    v13[8] = v14;
    ComputeMagnificationFactor(v12);
    AcquireMagInputLock();
    v9 = (void *)Win32AllocPool(44, 1735226197);
    *(_DWORD *)(v3 + 128) = v9;
    if ( !v9 )
    {
      UserSetLastError((struct _NT_TIB *)0xE);
      _InterlockedExchange(&gpMagInputLock, 0);
      return 0;
    }
    qmemcpy(v9, v13, 0x2Cu);
    _InterlockedExchange(&gpMagInputLock, 0);
    _PostMessage(-1, 804, 0, 0);
  }
  return 1;
}
