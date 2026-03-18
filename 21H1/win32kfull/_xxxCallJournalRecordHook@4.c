/*
 * XREFs of _xxxCallJournalRecordHook@4 @ 0x152B33
 * Callers:
 *     ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z @ 0x6F108 (-xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 *     _PhkFirstGlobalValid@8 @ 0x6F434 (_PhkFirstGlobalValid@8.c)
 */

unsigned int __thiscall xxxCallJournalRecordHook(int this)
{
  int v2; // eax
  unsigned int v3; // ecx
  int v4; // eax
  unsigned __int8 v5; // cl
  int v6; // edx
  bool v7; // zf
  unsigned int GlobalValid; // eax
  int v9; // edx
  int v10; // ecx
  unsigned int result; // eax
  unsigned int v12; // eax
  int *v13; // [esp+0h] [ebp-20h]
  bool v14; // [esp+4h] [ebp-1Ch]
  int v15; // [esp+8h] [ebp-18h] BYREF
  int v16; // [esp+Ch] [ebp-14h]
  int v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  unsigned int v20; // [esp+1Ch] [ebp-4h] BYREF

  v16 = 0;
  v2 = *(_DWORD *)(this + 12);
  v3 = *(_DWORD *)(this + 8);
  v15 = v2;
  v4 = *(_DWORD *)(this + 24);
  v17 = 0;
  v20 = 0;
  v18 = v4;
  if ( HMValidateHandleNoSecure(v3, 1) )
    v19 = *(_DWORD *)(this + 8);
  else
    v19 = 0;
  if ( (unsigned int)(v15 - 512) > 0xE )
  {
    if ( (unsigned int)(v15 - 256) <= 9 )
    {
      v5 = *(_BYTE *)(this + 22);
      if ( *(_WORD *)(this + 16) != 231 || v5 )
      {
        v6 = v5;
        v16 = *(unsigned __int8 *)(this + 16) | (v5 << 8);
      }
      else
      {
        v6 = 0;
        v16 = (*(unsigned __int16 *)(_gptiCurrent + 486) << 16) | 0xE7;
      }
      v7 = (*(_DWORD *)(this + 20) & 0x1000000) == 0;
      v17 = v6;
      if ( !v7 )
        v17 = v6 | 0x8000;
    }
  }
  else
  {
    v16 = *(_DWORD *)(this + 28);
    v17 = *(_DWORD *)(this + 32);
  }
  GlobalValid = PhkFirstGlobalValid(_gptiCurrent, 0);
  xxxCallHook2(v9, GlobalValid, 0, &v15, (int *)&v20, 0, v13, v14);
  v10 = *(_DWORD *)(this + 12);
  if ( (unsigned int)(v10 - 512) > 0xE )
  {
    result = v10 - 256;
    if ( (unsigned int)(v10 - 256) <= 9 )
    {
      v12 = v16;
      *(_BYTE *)(this + 16) = v16;
      result = v12 >> 8;
      *(_BYTE *)(this + 22) = result;
    }
  }
  else
  {
    *(_DWORD *)(this + 28) = v16;
    result = v17;
    *(_DWORD *)(this + 32) = v17;
  }
  return result;
}
