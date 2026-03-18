/*
 * XREFs of MiPurgeImageSection @ 0x14025AD28
 * Callers:
 *     MiCheckControlArea @ 0x140287660 (MiCheckControlArea.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x1402206C0 (MiDereferenceControlAreaPfnList.c)
 *     MiInvalidateCollidedIos @ 0x140226AE0 (MiInvalidateCollidedIos.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
 *     MiLockLeafPage @ 0x1402738F0 (MiLockLeafPage.c)
 *     MiLockProtoPoolPageForce @ 0x140273AAC (MiLockProtoPoolPageForce.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiReleasePageFileSpace @ 0x140274E48 (MiReleasePageFileSpace.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 */

unsigned __int64 __fastcall MiPurgeImageSection(__int64 a1)
{
  __int64 v1; // r13
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned int v10; // r8d
  ULONG_PTR v11; // r12
  __int64 v12; // r13
  ULONG_PTR v13; // r14
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  _DWORD *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  int v21; // r15d
  int v22; // edx
  bool v23; // zf
  __int64 v24; // rbx
  int v25; // [rsp+20h] [rbp-78h] BYREF
  __int64 v26; // [rsp+28h] [rbp-70h]
  __int64 v27; // [rsp+30h] [rbp-68h]
  __int64 v28; // [rsp+38h] [rbp-60h]
  __int64 v29; // [rsp+40h] [rbp-58h]
  ULONG_PTR v30; // [rsp+48h] [rbp-50h]
  unsigned int v32; // [rsp+B0h] [rbp+18h]
  unsigned int v33; // [rsp+B8h] [rbp+20h]

  v1 = a1 + 128;
  result = qword_140C51F48;
  v3 = *(_WORD *)(a1 + 60) & 0x3FF;
  v4 = a1;
  v26 = 0LL;
  v5 = *(_QWORD *)(qword_140C51F48 + 8 * v3);
  v27 = v5;
  while ( 1 )
  {
    v28 = v1;
    if ( !v1 )
      return result;
    if ( (*(_WORD *)(v1 + 34) & 2) == 0 )
      goto LABEL_4;
    v7 = MiSwizzleInvalidPte(16LL * (*(_WORD *)(v1 + 32) & 0x3E), *(_WORD *)(v1 + 32) & 0x3E);
    v9 = v7;
    v33 = 0;
    v32 = 0;
    if ( *(_DWORD *)(v1 + 36) )
    {
      v9 = MiSwizzleInvalidPte(16 * (v6 | (v1 << 12) | 0x40), v6);
      v33 = (*(_DWORD *)(v1 + 40) << 9) | (v10 >> 4);
    }
    v11 = *(_QWORD *)(v1 + 8);
    result = v11 + 8LL * *(unsigned int *)(v1 + 44);
    v30 = result;
    if ( v11 < result )
    {
      v12 = v26;
      while ( 1 )
      {
        if ( (v11 & 0xFFF) == 0 || !v12 )
        {
          if ( v12 )
          {
            LOBYTE(v6) = 17;
            MiUnlockProtoPoolPage(v12, v6);
          }
          v12 = MiLockProtoPoolPageForce(v11);
        }
        v13 = MiLockLeafPage(v11, 0LL);
        result = MI_READ_PTE_LOCK_FREE(v11);
        v6 = 0LL;
        v15 = result;
        if ( !result )
        {
LABEL_20:
          v26 = v12;
          v8 = v12;
          v1 = v28;
          break;
        }
        if ( v13 )
        {
          if ( (*(_BYTE *)(v13 + 34) & 0x10) != 0 || (*(_DWORD *)(v13 + 16) & 0x400LL) == 0 )
          {
            v16 = (_DWORD *)(v13 + 16);
            if ( (*(_DWORD *)(v13 + 16) & 0x400LL) != 0 )
              MiDereferenceControlAreaPfnList(v4, 0LL, v14, 2);
            v17 = *(_QWORD *)(v13 + 40) & 0xFFFFFFFFFFLL;
            v26 = 0LL;
            v18 = 0LL;
            v29 = v17;
            if ( *(_WORD *)(v13 + 32) )
            {
              *(_QWORD *)(v13 + 24) |= 0x4000000000000000uLL;
              if ( (*(_BYTE *)(v13 + 34) & 0x28) == 0x20 )
              {
                v19 = *(_QWORD *)v13 - 32LL;
                if ( *(_QWORD *)(v19 + 16) == v19 + 16 )
                  v19 = 0LL;
                v26 = v19;
              }
              if ( (*v16 & 0x400LL) == 0 )
                MiChargeCommit(v27, 1LL, 4LL);
            }
            else
            {
              MiUnlinkPageFromListEx(v13);
              if ( (*v16 & 0x400LL) == 0 )
                v18 = MiCapturePageFileInfoInline((unsigned __int64 *)(v13 + 16), 0, 1);
              if ( qword_140C50780 )
              {
                if ( (v15 & 0x10) != 0 )
                  v15 &= ~0x10uLL;
                else
                  v15 &= ~qword_140C50780;
              }
              MiInsertPageInFreeOrZeroedList((v15 >> 12) & 0xFFFFFFFFFFLL);
            }
            v20 = v9;
            v21 = 0;
            if ( (unsigned int)MiPteInShadowRange(v11) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v21 = v22 + 1;
                if ( HIBYTE(word_140C51864) == (_BYTE)v22 )
                {
                  v23 = ((unsigned __int8)v9 & (unsigned __int8)v21) == 0;
LABEL_49:
                  if ( !v23 )
                    v20 = v9 | 0x8000000000000000uLL;
                }
              }
              else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v23 = (v9 & 1) == 0;
                goto LABEL_49;
              }
            }
            *(_QWORD *)v11 = v20;
            if ( v21 )
              MiWritePteShadow(v11, v20);
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v26 )
              MiInvalidateCollidedIos(v26);
            v24 = 48 * v29 - 0x220000000000LL;
            v25 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v25);
              while ( *(__int64 *)(v24 + 24) < 0 );
            }
            result = MiDecrementShareCount(v24);
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v5 = v27;
            if ( v18 )
              result = MiReleasePageFileInfo(v27, v18, 1LL);
            v4 = a1;
            goto LABEL_17;
          }
          result = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else if ( (result & 0x400) == 0 )
        {
          result = MiSwizzleInvalidPte(768LL, 0LL);
          if ( v15 != result )
          {
            result = MiReleasePageFileSpace(v5, v15, 1LL);
            *(_QWORD *)v11 = v9;
          }
        }
LABEL_17:
        v11 += 8LL;
        v32 += 4096;
        if ( v32 >= v33 )
          v9 = v7;
        if ( v11 >= v30 )
          goto LABEL_20;
      }
    }
    if ( v8 )
    {
      LOBYTE(v6) = 17;
      result = MiUnlockProtoPoolPage(v8, v6);
      v26 = 0LL;
    }
LABEL_4:
    v1 = *(_QWORD *)(v1 + 16);
  }
}
