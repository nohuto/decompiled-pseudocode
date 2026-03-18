/*
 * XREFs of ?zzzRecalc2@@YGXPAUtagQ@@@Z @ 0xC7CC8
 * Callers:
 *     ?zzzRecalcThreadAttachment@@YGXXZ @ 0xC7C48 (-zzzRecalcThreadAttachment@@YGXXZ.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     ?GetRecalcHeadPtiListEntry@@YGPAU_LIST_ENTRY@@XZ @ 0xC7CB4 (-GetRecalcHeadPtiListEntry@@YGPAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YGPAUtagTHREADINFO@@PAU_LIST_ENTRY@@@Z @ 0xC7D7A (-GetRecalcPtiFromListEntry@@YGPAUtagTHREADINFO@@PAU_LIST_ENTRY@@@Z.c)
 *     ?zzzAddAttachment@@YGXPAUtagTHREADINFO@@PAUtagQ@@PAH@Z @ 0xC7DBA (-zzzAddAttachment@@YGXPAUtagTHREADINFO@@PAUtagQ@@PAH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __thiscall zzzRecalc2(void *this)
{
  void *v1; // esi
  struct _LIST_ENTRY *Flink; // ebx
  struct tagTHREADINFO *RecalcPtiFromListEntry; // eax
  struct tagTHREADINFO *v4; // edi
  _DWORD *v5; // esi
  _DWORD **v6; // ecx
  _DWORD *v7; // esi
  struct _LIST_ENTRY *v8; // [esp+0h] [ebp-28h]
  int *v9; // [esp+4h] [ebp-24h]
  _BYTE v10[8]; // [esp+Ch] [ebp-1Ch] BYREF
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // [esp+14h] [ebp-14h]
  _DWORD **v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+1Ch] [ebp-Ch] BYREF
  struct _LIST_ENTRY *v14; // [esp+20h] [ebp-8h]
  void *v15; // [esp+24h] [ebp-4h]

  v1 = this;
  ++_gdwDeferWinEvent;
  v15 = this;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v10);
  do
  {
    v13 = 0;
    RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
    Flink = RecalcHeadPtiListEntry->Flink;
    v14 = Flink;
    if ( Flink == RecalcHeadPtiListEntry )
      break;
    do
    {
      RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(v8);
      v4 = RecalcPtiFromListEntry;
      if ( RecalcPtiFromListEntry && *((void **)RecalcPtiFromListEntry + 90) == v1 )
      {
        v5 = (_DWORD *)_gpai;
        if ( _gpai )
        {
          do
          {
            if ( (struct tagTHREADINFO *)v5[1] == v4 || (struct tagTHREADINFO *)v5[2] == v4 )
              zzzAddAttachment((struct tagTHREADINFO *)&v13, (struct tagQ *)v8, v9);
            v5 = (_DWORD *)*v5;
          }
          while ( v5 );
          Flink = v14;
        }
        if ( (*((_BYTE *)v4 + 264) & 2) != 0 )
        {
          v6 = (_DWORD **)(*((_DWORD *)v4 + 62) + 92);
          v12 = v6;
          v7 = *v6;
          if ( *v6 != v6 )
          {
            do
            {
              if ( (*(_BYTE *)(v7 - 35) & 2) != 0 && *(v7 - 43) == *((_DWORD *)v4 + 58) )
              {
                zzzAddAttachment((struct tagTHREADINFO *)&v13, (struct tagQ *)v8, v9);
                v6 = v12;
              }
              v7 = (_DWORD *)*v7;
            }
            while ( v7 != v6 );
            Flink = v14;
          }
        }
        v1 = v15;
      }
      Flink = Flink->Flink;
      v14 = Flink;
    }
    while ( Flink != RecalcHeadPtiListEntry );
  }
  while ( v13 );
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v10);
  zzzEndDeferWinEventNotify();
}
