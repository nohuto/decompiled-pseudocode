/*
 * XREFs of InitOnceScanIndexes @ 0x1407531F0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x140752FC4 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140753078 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x1407530FC (SdbReadWORDTag.c)
 *     SdbFindFirstTag @ 0x1407533B4 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x140753624 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x1407536A0 (SdbGetFirstChild.c)
 */

__int64 __fastcall InitOnceScanIndexes(PRTL_RUN_ONCE RunOnce, _DWORD *Parameter, PVOID *Context)
{
  unsigned int v3; // esi
  char *v6; // r12
  unsigned int FirstChild; // eax
  unsigned int v8; // r14d
  unsigned int i; // eax
  unsigned int v10; // ebp
  unsigned int FirstTag; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // edx
  __int64 v15; // rax

  v3 = 0;
  if ( Parameter && Context )
  {
    v6 = (char *)(Parameter + 12);
    memset(Parameter + 12, 0, 0x500uLL);
    FirstChild = SdbGetFirstChild(Parameter, 0LL);
    v8 = FirstChild;
    if ( FirstChild && (unsigned __int16)SdbGetTagFromTagID(Parameter, FirstChild) == 30722 )
    {
      Parameter[339] = 0;
      for ( i = SdbFindFirstTag(Parameter, v8, 30723LL); ; i = SdbFindNextTag((__int64)Parameter, v8, v10) )
      {
        v10 = i;
        if ( !i )
        {
          *Context = v6;
          return 1;
        }
        if ( Parameter[339] == 32 )
          goto LABEL_20;
        FirstTag = SdbFindFirstTag(Parameter, i, 14338LL);
        if ( !FirstTag )
          goto LABEL_20;
        LOWORD(Parameter[10 * Parameter[339] + 13]) = SdbReadWORDTag((__int64)Parameter, FirstTag, 0);
        v12 = SdbFindFirstTag(Parameter, v10, 14339LL);
        if ( !v12 )
          goto LABEL_20;
        HIWORD(Parameter[10 * Parameter[339] + 13]) = SdbReadWORDTag((__int64)Parameter, v12, 0);
        v13 = SdbFindFirstTag(Parameter, v10, 16406LL);
        Parameter[10 * Parameter[339] + 20] = v13 ? SdbReadDWORDTag((__int64)Parameter, v13, 0) : 0;
        v14 = SdbFindFirstTag(Parameter, v10, 38913LL);
        v15 = (unsigned int)Parameter[339];
        if ( !v14 )
          break;
        Parameter[10 * v15 + 12] = v14;
        ++Parameter[339];
      }
      LOWORD(Parameter[10 * v15 + 13]) = 0;
    }
LABEL_20:
    AslLogCallPrintf(1LL);
    return v3;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
