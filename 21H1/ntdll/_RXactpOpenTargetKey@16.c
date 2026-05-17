/*
 * XREFs of _RXactpOpenTargetKey@16 @ 0x4B3454BA
 * Callers:
 *     _RXactpCommit@4 @ 0x4B34539B (_RXactpCommit@4.c)
 * Callees:
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 */

int __fastcall RXactpOpenTargetKey(int a1, int a2, int a3, int a4)
{
  int v5; // [esp+4h] [ebp-1Ch] BYREF
  int v6; // [esp+8h] [ebp-18h]
  int v7; // [esp+Ch] [ebp-14h]
  int v8; // [esp+10h] [ebp-10h]
  int v9; // [esp+14h] [ebp-Ch]
  int v10; // [esp+18h] [ebp-8h]
  _BYTE v11[4]; // [esp+1Ch] [ebp-4h] BYREF

  if ( a2 == 1 )
  {
    v7 = a3;
    v9 = 0;
    v10 = 0;
    v5 = 24;
    v6 = a1;
    v8 = 64;
    return ZwOpenKey(a4, 0x10000, (int)&v5);
  }
  else if ( a2 == 2 )
  {
    v6 = a1;
    v7 = a3;
    v9 = 0;
    v10 = 0;
    v5 = 24;
    v8 = 192;
    return ZwCreateKey(a4, 131078, (int)&v5, 0, 0, 0, (int)v11);
  }
  else
  {
    return -1073741811;
  }
}
