/*
 * XREFs of ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803AF388
 * Callers:
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___::OnStoryboardStatusChanged @ 0x1803AF820 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f400_ea_1803AF820.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___::OnStoryboardStatusChanged @ 0x1803B11E0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_66e9bc9c72e516e99e5f8bbfe0_ea_1803B11E0.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___::OnStoryboardStatusChanged @ 0x1803BDB20 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864_ea_1803BDB20.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___::OnStoryboardStatusChanged @ 0x1803C24F0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_3f14cb8a0624f1150359153641_ea_1803C24F0.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___::OnStoryboardStatusChanged @ 0x1803C3760 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_34f025963987b113629715f071_ea_1803C3760.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___::OnStoryboardStatusChanged @ 0x18041FD30 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_5464665cf186818e8ef685f1f6_ea_18041FD30.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9___::OnStoryboardStatusChanged @ 0x18041FE40 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lamb.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a___::OnStoryboardStatusChanged @ 0x180425920 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036_ea_180425920.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___::OnStoryboardStatusChanged @ 0x180425A30 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3_ea_180425A30.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___::OnStoryboardStatusChanged @ 0x18042ABC0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067_ea_18042ABC0.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___::OnStoryboardStatusChanged @ 0x18042AD10 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067_ea_18042AD10.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___::OnStoryboardStatusChanged @ 0x18042AE20 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067_ea_18042AE20.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2___::OnStoryboardStatusChanged @ 0x1804444A0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_06ac9bc0098fdd3d203260c35b_ea_1804444A0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IStoryboardExtraData>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_98180884_82b1_4114_831c_6f208f7718e7,
           a2);
}
