/*
 * XREFs of ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18009F1E4
 * Callers:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180097EB0 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009EBAC (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009F084 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18009F5E4 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureSize(__int64 this, unsigned int a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // eax
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 *i; // r8
  unsigned int v8; // edx
  int v9; // eax
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 **v12; // rcx
  int v13; // eax
  int NewBlock; // eax
  __int64 v15; // rcx
  __int64 **v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-18h]

  v2 = a2;
  v3 = (a2 + 3) & 0xFFFFFFFC;
  v4 = this;
  if ( v3 >= a2 )
    v2 = (a2 + 3) & 0xFFFFFFFC;
  v5 = v3 < a2 ? 0x80070216 : 0;
  if ( v3 < a2 )
  {
    v17 = 381;
    goto LABEL_31;
  }
  this = *(_QWORD *)(this + 32);
  if ( this )
  {
    if ( *(_DWORD *)(this + 16) - *(_DWORD *)(this + 20) >= v2 )
      return v5;
    if ( !*(_DWORD *)(this + 20) )
    {
      operator delete((void *)this);
      *(_QWORD *)(v4 + 32) = 0LL;
    }
  }
  for ( i = *(__int64 **)(v4 + 16); i != (__int64 *)(v4 + 16); i = (__int64 *)*i )
  {
    this = *((unsigned int *)i + 4);
    if ( (unsigned int)this >= v2 )
    {
      v8 = *(_DWORD *)(v4 + 40);
      v9 = -1;
      this = v8 + (unsigned int)this;
      if ( (unsigned int)this >= v8 )
        v9 = this;
      v5 = (unsigned int)this < v8 ? 0x80070216 : 0;
      *(_DWORD *)(v4 + 40) = v9;
      if ( (unsigned int)this >= v8 )
      {
        v10 = *(__int64 **)(v4 + 32);
        if ( v10 )
        {
          v16 = *(__int64 ***)(v4 + 8);
          if ( *v16 == (__int64 *)v4 )
          {
            *v10 = v4;
            v10[1] = (__int64)v16;
            *v16 = v10;
            *(_QWORD *)(v4 + 8) = v10;
            goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          v11 = (__int64 *)*i;
          if ( *(__int64 **)(*i + 8) == i )
          {
            v12 = (__int64 **)i[1];
            if ( *v12 == i )
            {
              *v12 = v11;
              v11[1] = (__int64)v12;
              *((_DWORD *)i + 5) = 0;
              *(_QWORD *)(v4 + 32) = i;
              return v5;
            }
          }
        }
        __fastfail(3u);
      }
      v17 = 416;
LABEL_31:
      MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v5, v17, 0LL);
      return v5;
    }
  }
  v13 = 0x4000;
  if ( *(_DWORD *)(v4 + 40) < 0x4000u )
    v13 = *(_DWORD *)(v4 + 40);
  if ( v13 + v2 < v2 )
  {
    v5 = -2147024362;
    v17 = 480;
    goto LABEL_31;
  }
  NewBlock = CDataStreamWriter::AllocateNewBlock((CDataStreamWriter *)v4, v13 + v2);
  v5 = NewBlock;
  if ( NewBlock < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, NewBlock, 0x1E2u, 0LL);
  return v5;
}
